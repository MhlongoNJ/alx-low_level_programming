#include "lists.h"

/**
* list_len - determines length of linked list from the list
* @h: pointer to the first node in a list of many nodes
*Return: size of list in a list or arrays
*/

size_t list_len(const list_t *h)
{
    size_t j = 0;

    while (h)
    {
        h = h->next;
        j++;
    }
return (j);
}