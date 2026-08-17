
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> //sleep
   
#include <SDL3/SDL.h>

// cool - a blue background !woop woop ! 

int main(){
  printf("hello world \n");
  if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS))
    {
      fprintf(stderr, "sdl3 -- flipped 1 is success, 0 is failure. failed to init sdl3");
      return -1;
    }
  

  char msg[] = "hello";
  SDL_Window *win = NULL;
  SDL_Renderer *rend = NULL;
  if (!SDL_CreateWindowAndRenderer(msg,640,480, 0,&win,&rend)){
    fprintf(stderr, "Window creation failed: %s\n", SDL_GetError());
    SDL_Quit();
    return -1;
  }

  
    // Set draw color to blue (Red=0, Green=0, Blue=255, Alpha=255)
    SDL_SetRenderDrawColor(rend, 0, 0, 255, SDL_ALPHA_OPAQUE);

    // Clear the screen with the blue color
    SDL_RenderClear(rend);

    // Present the rend to the screen
    SDL_RenderPresent(rend);

    
    /*
  bool done = false;
  SDL_Event event;

  // Main event loop
  while (!done) {
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_EVENT_QUIT) {
      	done = true;
      }
    }
  }
    */

    // Wait for 3 seconds so you can see the blue window
    SDL_Delay(3000);

    // Cleanup
    SDL_DestroyRenderer(rend);
    
  // Cleanup
  SDL_DestroyWindow(win);
  SDL_Quit();
  return 0;
    
}

