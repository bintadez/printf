/**
 * _numlen - Checks  the length of an integer
 * @num: The input integer
 *
 * Return: The length of the integer.
 */
int _numlen(int num)
{
	int len = 0;
	unsigned int n;

	if (num < 0)
	{
		len++;
		n = -num;
	}
	else
	{
		n = num;
	}

	while (n != 0)
	{
		len++;
		n /= 10;
	}

	return (len);
}

