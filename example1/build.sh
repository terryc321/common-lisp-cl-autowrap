#!/bin/bash

set -e

 gcc -Wall -Werror -o hello sdl3-version.c `pkg-config --cflags --libs sdl3`
# gcc -o hello sdl2-version.c `pkg-config --cflags --libs sdl2`
#./hello
