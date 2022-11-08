#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -sc *.c
ar rc liball.a *.o
