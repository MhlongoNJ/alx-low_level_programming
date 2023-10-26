#include "lists.h"

/**
* free_listint - frees a list of ints
* @head: pointer to the first node
*
* Return: pointer to new node
*/

void free_listint(listint_t *head)

{
listint_t *node;

while (head)
{
node = head;
head = head->next;
free(node);
}
}
