/**
 * _printf - Prints a formatted output to stdout
 * @format: The format string
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int printed_char = 0;
	int *args = (int *)&format + 1;

	printed_char = handle_specifier(format, args);

	return (printed_char);
}
