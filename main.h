#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int _printf(const char *format, ...);
int handle_specifier(const char *format, int *args);
int _putchar(char c);
int _puts(const char *str);
int _strlen(const char *str);
int _numlen(int num);
int _putnum(int num);
#endif
