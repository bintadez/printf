#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/*custom putchar*/
int _putchar(char c);

/*Helper_functions*/
int _printchar(char c);
int _printstr(char *str);
int _printcent(void);
int _printnum(int n);
int _printf(const char *format, ...);
#endif
