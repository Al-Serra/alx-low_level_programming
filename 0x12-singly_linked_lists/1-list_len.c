#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * to find the length of a string
 * @h: the head node
 * Return: (size_t) the node length
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
