#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: first node in the list
 * @number: integer to save in the linked list
 * Return: the address of the new element
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *idxnode = NULL, *help = NULL;
	int idx = 0;/*iterator for index*/

	help = *head;
	while (help && help->next->n < number) // Check the next value
	{
            idx++;
		    help = help->next; /*move the next of *head */
	}
	if (!help)
		return (NULL);

	idxnode = malloc(sizeof(listint_t)); /*reserved memory for idxnode*/
	if (!idxnode)
		return (NULL);
	idxnode->n = number; /*put in the data */
	if (idx == 0)
	{
		idxnode->next = *head;/*Make next of new node as next of *head*/
		*head = idxnode;/*move the next of *head as idxnode*/
	}
    else
	{
		idxnode->next = help->next;
		help->next = idxnode;
	}
	return (idxnode);
}
