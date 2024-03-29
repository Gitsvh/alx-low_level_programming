#include "lists.h"

/**
 * add_nodeint - adds new node beginning of a listint_t list
 * @head: pointer to address of head listint_t list
 * @n: the integer of the new node
 * Return: the address of the new list or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
