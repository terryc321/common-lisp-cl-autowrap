
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> //sleep
   
#include <SDL2/SDL.h>


int main(){
  printf("hello world \n");
  Uint32 init= 0;
  init = SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
  if (init)
    {
      fprintf(stderr, "0 is success, anything else is failure. failed to init sdl2");
      return -1;
    }
  fprintf(stdout,"init was %d\n" , init);
  
  //SDL_Window *win = SDL_CreateWindow("hello",640,480, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);

  char msg[10] = "hello";
  SDL_Window *win = SDL_CreateWindow(msg,SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , 640,480, 0);
  
  SDL_ShowWindow(win);
  /* if (!res){ */
  /*   fprintf(stderr,"failed to show\n"); */
  /* } */
  
  bool done = false;
  SDL_Event event;

  // Main event loop
  while (!done) {
    while (SDL_PollEvent(&event)) {
      //if (event.type == SDL_EVENT_QUIT) {
      if (event.type == SDL_QUIT) {
	done = true;
      }
    }
  }

  // Cleanup
  SDL_DestroyWindow(win);
  SDL_Quit();
  return 0;
    
}

