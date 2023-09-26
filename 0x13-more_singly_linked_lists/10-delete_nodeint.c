#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at index index
  * of a listint_t linked list
  * @head: head of the list
  * @index: location of the node to delete
  * Return: pointer to head of the list
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int s;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (s = 0; s < (index - 1); s++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}
