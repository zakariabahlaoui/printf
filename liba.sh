#!/bin/bash
files="print_char.c  printf.c  print_int.c  print_string.c  print_unsigned.c  _putchar.c  _strlen.c"
gcc -Wall -pedantic -Werror -Wextra -c $files
ar -rc liball.a *.o
ranlib liball.a
