#include "lists.h"
/**
  * listint_len - gets the number of nodes in a list
  * @h: singly linked list to print
  * Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t s;

	for (s = 0; h; s++)
		h = h->next;
	return (s);
}
