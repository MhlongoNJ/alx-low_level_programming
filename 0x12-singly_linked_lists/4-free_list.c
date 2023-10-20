#include "lists.h"

/**
* free_list - frees all nodes of a list or arrays
* @head: address of pointers to head nodes
*Return: void which means there are no arguments
*/

void free_list(list_t *head)
{
    list_t *node, *next_level_node;

    if (!head)
    return;

node = head;
while (node)
{
    next_level_node = node->next;
    free(node->str);
    free(node);
    node = next_level_node;
}
}