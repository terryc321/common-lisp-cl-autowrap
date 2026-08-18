#!/bin/bash

set -e

gcc -Wall -Werror -o hello3 sdl3-version.c `pkg-config --cflags --libs sdl3`

gcc -Wall -Werror -o hello2 sdl2-version.c `pkg-config --cflags --libs sdl2`

#./hello
