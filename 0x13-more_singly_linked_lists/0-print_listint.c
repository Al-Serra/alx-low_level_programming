#include "lists.h"
/**
  * print_listint - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t s;

	for (s = 0; h; s++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (s);
}
