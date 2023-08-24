/* EL HAKIK AMINA */
#include <stdlib.h>
#include "lists.h"

/**
 * list_len -function that  returns the number of elements in a linked list
 * @h: pointer that point to  the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
