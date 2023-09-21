#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: the argument
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}
