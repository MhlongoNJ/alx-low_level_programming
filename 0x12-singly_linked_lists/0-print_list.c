#include "lists.h"

/**
* _strlen - this will return the length of a string
* @s: the string of which whose lenth will be checked
*Return: integer length of a string which is denoted with j
*/

int _strlen(char *s)
{
    int j = 0;
    if (!s)
    return (0);
while (*s++)
        j++;
    return (j);
}

/**
* print_list - prints a linked lists to the standard output
* @h: pointer to the first node which points to the next node
*Return: size of list denoted with j
*/

size_t print_list(const list_t *h)
{
    size_t j = 0;

    while (h)
    {
        printf ("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
        h = h->next;
        j++;
    }
    return (j);
}