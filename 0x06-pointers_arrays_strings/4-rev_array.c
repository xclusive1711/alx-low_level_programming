/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to int array
 * @n: is the number of elements to swap
 * Return: void(no returns)
 */

void reverse_array(int *a, int n)
{
	int temp;

	int s;

	int e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
