#include "lists.h"
/**
 * insert_node - inserts a new code
 * in a sorted singly linked list
 * @head: address to the head node
 * @number: number about be be inserted
 */
listint_t *insert_node(listint_t **head, int insert)
{
	listint_t *new = NULL, *cur = (*head), *next = NULL;

	/* NULL CHECK */
	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	new->n = insert;

	/* Finally, a decent linked list */
	for (next = cur->next; next; cur = cur->next, next = next->next)
		if (cur->n >= insert)
			break;

	cur->next = new, new->next = next;
	return (new);
}
