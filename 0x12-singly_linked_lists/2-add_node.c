#include "lists.h"
/**
 * *add_node - dds a new node at the beginning of a list_t list
 * @head: the node head
 * @str: stored string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int s, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (s = 0; str[s] != '\0'; s++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
