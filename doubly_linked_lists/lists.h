#ifndef LISTS_H
#define LISTS_H

#include <linux/types.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to previous node
 * @next: points to next node
 */
struct dlistint_s {
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
};

typedef struct dlistint_s dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
