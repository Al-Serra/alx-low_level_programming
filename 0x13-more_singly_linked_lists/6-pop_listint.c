#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t linked list,
  * and returns its contents(the head node’s data (n).
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int s;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		s = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		s = 0;
	return (s);
}
