#include "main.h"
#include <stdlib.h>
/**
 * _printstr - Prints a string to stdout
 * @str: The string to be printed
 *
 * Return: The number of characters printed.
 */
int _printstr(char *str)
{
	int n = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	return (n);
}
/**
 * _printchar - Prints a character to stdout
 * @c: The character to be printed
 *
 * Return: The number of characters printed.
 */
int _printchar(char c)
{
	if (!c)
	{
		return (0);
	}
	return (_putchar(c));
}
/**
 * _printcent - Prints % to stdout
 *
 * Return: 1
 */
int _printcent(void)
{
	return (_putchar('%'));
}
/**
 * _printnum - Prints a number
 * @n: The number to be printed
 *
 * Return: The number of characters printed.
 */
int _printnum(int n)
{
	char *tempmem = NULL;
	int temp = n, msize, count_digits = 0;
	int i, sign = 0; /* sign set to zero means n is a positive number*/

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)/*checking the sign of the number*/
	{
		sign = 1;
		n *= -1;
	}
	while (temp != 0)
	{
		count_digits++;
		temp /= 10;
	}
	msize = count_digits + 1;
	tempmem = malloc(sizeof(char) * msize);
	for (i = msize - 2; i >= 0; i--)
	{
		tempmem[i] = (n % 10) + '0';
		n /= 10;
	}
	tempmem[msize - 1] = '\0';
	if (sign == 1)/*meaning n is a negative number*/
	{
		_putchar('-');
		count_digits++;
	}
	_printstr(tempmem);/*calling the printing string function to print*/
	free(tempmem);
	return (count_digits);
}
