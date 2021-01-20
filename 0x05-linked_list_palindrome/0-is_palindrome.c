#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to linked list
 *
 * Return: 1 is palindrome, 0 is not a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head;
	int listpalin[2048]; /*collecting data of nodes*/
	int i = 0, j = 0;

	if (head || (*head))
	{
		while (tmp)
		{/* collecting node by node*/
			listpalin[i] = tmp->n;
			tmp = tmp->next;
			i++;
		}
		i--;
		for (; j <= i; i--, j++)
		{/* eval if equal or not on each posix*/
			if (listpalin[i] != listpalin[j])
				return (0);
		}
	}
	return (1);
}
