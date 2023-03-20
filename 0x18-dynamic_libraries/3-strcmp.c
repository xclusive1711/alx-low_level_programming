/**
 * _strcmp - a function that compares two striniigs
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 * Return: returns r if s1 and s2 are equal
 * in @s1 was less than the stopping
 * character in @s2
 * positive integer if the stopping character
 * in @s1 was greater than the stopping
 * character in @s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, b;

	while (s1[i] != '\0' && s2[i] != '\0')
	{

		if (s1[i] != s2[i])
		{
			b = s1[i] - s2[i];
			break;
		}
		else
		{
			b = s1[i] - s2[i];
		}
		i++;
	}

	return (b);
}
