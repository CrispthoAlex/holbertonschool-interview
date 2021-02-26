#include "slide_line.h"


/**
 * move_right - Slides and merges an array of integers to the right
 * @line: Pointer to an array of integers
 * @size: Number of elements in array
 * Return: 1 is success
 */
void move_right(int *line, size_t size)
{
	int i, j;

	for (i = size - 1; i >= 0; i--)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (line[i] == 0 && line[j] > 0)
			{
				line[i] += line[j];
				line[j] = 0;
				i += 1;
				break;
			}
			if (line[j] > 0 && line[i] == line[j])
			{
				line[i] += line[j];
				line[j] = 0;
				break;
			}
		}
	}
}

/**
 * move_left - Slides and merges an array of integers to the left
 * @line: Pointer to an array of integers
 * @size: Number of elements in array
 * Return: 1 is success
 */
void move_left(int *line, size_t size)
{
	int i, j;

	for (i = 0; i < (int) size; i++)
	{
		for (j = i + 1; j < (int) size; j++)
		{
			if (line[i] == 0 && line[j] > 0)
			{
				line[i] += line[j];
				line[j] = 0;
				i -= 1;
				break;
			}
			if (line[j] > 0 && line[i] == line[j])
			{
				line[i] += line[j];
				line[j] = 0;
				break;
			}
		}
	}
}

/**
 * slide_line - Given an array of integers, we want to be able to slide
 * & merge it to the left or to the right. Identical numbers, if they are
 * contiguous or separated by zeros, should be merged
 * Goal: The goal of this task is to reproduce the 2048 game(NSFW !!) mechanics
 * on a single horizontal line.
 * @line: points to an array of integers
 * @size: Number of elements in array
 * @direction: can be either SLIDE_LEFT or SLIDE_RIGHT
 * Return: 1 upon success, or 0 upon failure
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction == SLIDE_LEFT)
	{
		move_left(line, size);
		return (1);
	}
	if (direction == SLIDE_RIGHT)
	{
		move_right(line, size);
		return(1);
	}
	return (0); /* Fail */
}
