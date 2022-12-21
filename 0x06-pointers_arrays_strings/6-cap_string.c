/**
 * cap_string - a function that capitalizes all words of a string
 * @s: pointer to char input array
 * Return: @s
 */

char *cap_string(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		if (s[l] >= 97 && s[l] <= 122)
		{

			if (l == 0)
			{
				s[l] -= 32;
			}

			if (s[l - 1] == 32 || s[l - 1] == 9 || s[l - 1] == 10 ||
				s[l - 1] == 44 || s[l - 1] == 59 || s[l - 1] == 46 ||
				s[l - 1] == 33 || s[l - 1] == 63 || s[l - 1] == 34 ||
				s[l - 1] == 40 || s[l - 1] == 41 || s[l - 1] == 123 ||
				s[l - 1] == 124)
			{
				s[l] -= 32;
			}
		}
		l++;
	}
	return (s);
}
