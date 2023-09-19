#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *str);
int _strlen(char *s);
int print_int(int n);
int print_unsi(unsigned int n);
int print_char(int c);
int print_hex(unsigned int num, char c);

#endif
