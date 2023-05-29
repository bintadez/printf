/**
 * _strlen - checks  the length of a string
 * @str: The input string to be checked
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
