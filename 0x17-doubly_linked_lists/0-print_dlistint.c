#include "lists.h"

/**
*print_dlistint - print a double linked list
*@h: header of double linked list
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;
	int iniprint = 0;

	for (x = 0; h != NULL; x++)
	{
		if (h->prev != NULL && iniprint == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			iniprint = 1;
			x = 0;
		}
		printf("%i\n", h->n);
		h = h->next;

	}

	return (x);
}
