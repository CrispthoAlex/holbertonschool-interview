#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#include "search.h"
#include <math.h>

skiplist_t *linear_search_aux(skiplist_t *head, skiplist_t *list, int value);

/**
* linear_skip - function that searches for a value in a sorted skip list
* of integers
* @list: *list is a pointer to the first element of the single linked list
* @value: is the value to search for
* Return: Index of value, else -1
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head = list; /* validate lower bound of block search */
	skiplist_t *temp = head; /* validate upper bound of block search */
	/* string to values check and index finded */
	char *val_check = "Value checked at index [%lu] = [%d]\n";
	char *val_index = "Value found between indexes [%lu] and [%lu]\n";

	if (!head)
		return (NULL);

	while (temp && temp->express) /*|| head->next)*/
	{
		/*if (head->express)   Update temp  */
		head = temp;
		temp = temp->express;
		printf(val_check, temp->index, temp->n);
		if (temp->n >= value) /*&& temp->express)*/
		{
			printf(val_index, head->index, temp->index);
			return (linear_search_aux(head, temp, value));
		}
		/*head = head->express;*/
	}
	head = temp; /* step back to last express, no value in linked list */
	while (temp->next)
		temp = temp->next;
	printf(val_index, head->index, temp->index);

	return (linear_search_aux(head, temp, value));
}


/**
 * linear_search_aux - searches for a value in an array of integers using
 * the Linear search algorithm
 * @head: lower bound of block of search
 * @temp: upper bound of block of search
 * @value: value to search
 *Return: index of value, else -1
 */
skiplist_t *linear_search_aux(skiplist_t *head, skiplist_t *temp, int value)
{
	char *val_check = "Value checked at index [%lu] = [%d]\n";

	while (head && head->index <= temp->index)
	{
		printf(val_check, head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next;
	}
	return (NULL);
}

