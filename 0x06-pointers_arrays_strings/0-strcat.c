/**
 * _strcat - concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int s;

	int s1;

	s = 0;
	/*find the size of dest array*/
	while (dest[s])
		s++;

	/* iterate through each src array value without the null byte*/
	for (s1 = 0; src[s1] ; s1++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[s++] = src[s1];

	return (dest);
}
