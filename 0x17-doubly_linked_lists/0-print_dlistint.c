#include "lists.h"

/**
 * print_dlistint - fuction that prints all the elements of dlistint_t list
 * @h: points to the head of the list
 * Description: shows the number of elements
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *list = h;
	size_t size = 0;

	while (list)
	{
		printf("%i\n", list->n);
		size++;
	}
	return (size);
}
