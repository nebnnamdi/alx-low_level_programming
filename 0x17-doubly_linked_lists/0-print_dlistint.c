#include "lists.h"
/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: head of list
 * Return: number_nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int number_nodes = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
number_nodes++;
}
return (number_nodes);

}
