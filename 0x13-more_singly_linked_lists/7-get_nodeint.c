#include "lists.h"
/**
  * get_nodeint_at_index - gets the nth node of a listint_t linked list
  * @head: head of the list
  * @index: which node to stop at
  * Return: pointer to the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s;

	s = 0;
	while (s < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		s++;
	}
	return (head);
}
