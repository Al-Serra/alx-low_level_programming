#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked list
 * Return: size_t number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s;

	for (s = 0; h; s++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (s);
}
