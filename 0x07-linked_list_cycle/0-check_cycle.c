#include "lists.h"

/**
 * check_cycle - check if there are cycle
 * @list: head of list
 *
 * Return: 0 no cycle, 1 is cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *temp;

	current = temp = list;

	while (current && temp && temp->next)
	{
		current = current->next;
		temp = temp->next->next;
		if (current == temp)
			return (1);
	}
	return (0);
}
