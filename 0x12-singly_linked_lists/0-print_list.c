#include "lists.h"

/**
 * print_list - function that print elements in a linked list
 * @h: pointer to head first node
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 1;

	/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_count += 1;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (node_count);
}
