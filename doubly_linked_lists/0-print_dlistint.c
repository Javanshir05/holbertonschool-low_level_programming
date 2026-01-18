#include <linux/kernel.h>
#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h) {
		printk(KERN_INFO "%d\n", h->n);
		h = h->next;
		count++;
	}

	return count;
}
