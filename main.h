#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *str);
int _strlen(char *s);
int print_int(int n);
int print_unsi(unsigned int n);
int print_char(int c);
int print_hex(unsigned int num, char c);
int print_octal(unsigned int num);
int print_binary(unsigned int num);
int print_p(unsigned long num);

#endif
