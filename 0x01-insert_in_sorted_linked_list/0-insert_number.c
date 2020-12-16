#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_node - function that inserts a new node at sorted linked list
 * @head: first node in the list
 * @number: integer to save in the linked list
 * Return: the address of the new element
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode = NULL, *current = NULL;
	int idx = 0;/*iterator for node position*/

	if (!head && !(*head)) /* Create a new list */
		return (add_nodeint_end(head, number));
	newnode = malloc(sizeof(listint_t)); /*reserved memory for newnode*/
	if (!newnode)
		return (NULL);
	newnode->n = number; /*input the data */

	current = *head;
	while (current) /* Check the next value */
	{
		if (current->next && current->next->n < number)
			current = current->next; /* move to the next node */
		else
			break;
		idx++;
	}

	if (idx == 0)
	{
		newnode->next = *head;/* Make new node the *head */
		*head = newnode;/* move *head the newnode*/
	}
	else
	{
		if (current->next)
		{
			newnode->next = current->next; /* */
			current->next = newnode;
		}
		else /* newnode is the last node*/
			return (add_nodeint_end(&current, number));
	}
	return (newnode);
}
