/*
 * EL HAKIK AMINA
 * ALX
 * */
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *new_str)
{
    list_t *new_node;
    unsigned int new_len = 0;

    while (new_str[new_len])
        new_len++;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    new_node->str = strdup(new_str);
    new_node->len = new_len;
    new_node->next = (*head);
    (*head) = new_node;

    return (*head);
}
