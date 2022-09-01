#include "lists.h"

/**
 * free_dlistint - free all elelemnts of a dlistint_t list
 * @head: head of list
 **/

void free_dlistint(dlistint_t *head)
{
dlistint_t *current_node;

while (head)
{
current_node = head;
head = head->next;
free(current_node);
}
}
