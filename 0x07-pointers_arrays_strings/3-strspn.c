/**
 * _strspn - gets the length of a prexif substring
 * @s: pointer to string input
 * @accept: substring prefix to look for
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		a = 0;
		c = 1;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = 0;
				break;
			}
			b++;
		}
		if (c == 1)
			break;
		a++;
	}

	return (a);
}
