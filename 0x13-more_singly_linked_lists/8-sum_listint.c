#include "lists.h"

/**
* sum_listint - returns sum of all data
* @head: address pointer to the first node
*
* Return: sum
*/

int sum_listint(listint_t *head)

{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
