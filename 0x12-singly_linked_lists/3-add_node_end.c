/*
 * ALX
 * EL HAKIK AMINA
 * */
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *new_str)
{
    list_t *new_node;
    list_t *temp = *head;
    unsigned int new_len = 0;

    while (new_str[new_len])
        new_len++;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    new_node->str = strdup(new_str);
    new_node->len = new_len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    while (temp->next)
        temp = temp->next;

    temp->next = new_node;

    return (new_node);
}
