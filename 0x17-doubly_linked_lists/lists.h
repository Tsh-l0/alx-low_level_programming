#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: Points to the previous node
 * @next: Points to the next node
 *
 *Description: Doubly linked list node structure
 *
 */

typedef struct dlistint_s
{
  int n;
  struct dlistint_s *prev;
  struct dlistint_s *next;
} dlistint_t;

#endif /* LISTS_H */
