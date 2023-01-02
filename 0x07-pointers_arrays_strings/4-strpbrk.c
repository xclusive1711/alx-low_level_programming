/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to input string
 * @accept: pointer to string we
 * searching for in @s
 * Return: pointer to the bytes in @s
 * and returns NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (s + a);
			b++;
		}
		a++;
	}
	return ('\0');
}
