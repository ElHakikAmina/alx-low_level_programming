/*
 *  1-list_len.c
 * ALX | HOLBERTON
 * EL HAKIK AMINA
 *  */
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        count++;
        h = h->next;
    }
    return (count);
}
