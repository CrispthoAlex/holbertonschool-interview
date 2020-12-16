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
		/*printf("\nBefore => This is current = %i next = %i", current->n, current->next->n);*/
        if (current->next && current->next->n < number)
		{	
			current = current->next; /* move to the next node */
			idx++;
		}
		else
			break;
        /*printf("\nNext check => This is current = %i next = %i and idx = %i", current->n, current->next->n, idx);*/
	}

	if (idx == 0)
	{
		newnode->next = *head;/* Make new node the *head */
		*head = newnode;/* move *head the newnode*/
	}
	else
	{
        /*printf("\nThis is current->next = %i and this newnode = %i\n", 
		current->next->n, newnode->n);*/
		if (current->next)
		{
            newnode->next = current->next; /* */
			current->next = newnode;
        }
		else
            return add_nodeint_end(&current, number); /* newnode is the last node*/
	}
	return (newnode);
}
