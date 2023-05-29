#include "main.h"
/**
 * _puts - Prints a string to stdout
 * @str: The string to be printed
 *
 * Return: The number of characters printed.
 */
int _puts(const char *str)
{
	int len = _strlen(str);

	return (write(1, str, len));
}

