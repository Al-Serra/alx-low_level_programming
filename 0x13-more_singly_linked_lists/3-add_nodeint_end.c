#include "lists.h"
/**
  * add_nodeint_end - add new nodes to the end of the list
  * @head: current place in the list
  * @n: integer to be added to the list
  * Return: pointer to the current position
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
