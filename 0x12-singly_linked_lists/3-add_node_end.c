#include "lists.h"

/**
* add_node - adds a node to the start of the list or arrays
* @head: address of pointer to head node in arrays or list
* @str: str fields of nodes
*Return: sizes of lists
*/

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *brand_new_node = malloc(sizeof(list_t));
    list_t *node = *head;

    if (!head || !brand_new_node)
    return (NULL);
if (str)
{

brand_new_node->str = strdup(str);
if (!brand_new_node->str)
{
    free(brand_new_node);
    return (NULL);
}

brand_new_node->len = _strlen(brand_new_node->str);
}
if (node)
{
    while (node->next)
    node = node->next;
node->next = brand_new_node;
}
else 
   *head = brand_new_node;
return (brand_new_node);
}


