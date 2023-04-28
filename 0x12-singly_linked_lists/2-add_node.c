#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to be added
 * Return: the address of the new list, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int leng = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[leng])
		leng++;
	temp->str = strdup(str);
	temp->len = leng;
	temp->next = *head;
	*head = temp;
	return (temp);
}