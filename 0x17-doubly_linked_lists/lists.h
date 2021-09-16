#ifndef LIST_H
#define LIST_H

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

//libraries
#include <stdio.h>
#include <stdlib.h>

//prototypes for the functions
//0. Print list
size_t print_dlistint(const dlistint_t *h);

#endif
