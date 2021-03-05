#include <math.h>
#include "menger.h"

/**
 * search_hole - Gets a Char
 * @col: column
 * @row: row
 * Return: '#' or ' '
 */
char search_hole(int col, int row)
{
	while (col && row)
	{
		if (col % 3 == 1 && row % 3 == 1)
			return (' ');
		col = col / 3;
		row = row / 3;
	}
	return ('#');
}

/**
 * menger - function that draws a 2D Menger Sponge
 * @level: the level of the Menger Sponge to draw
 * Return - If level is lower than 0, your function must do nothing
 **/
void menger(int level)
{
	int col, row, size;

	if (level < 0)
		return;

	size = pow(3, level);

	for (col = 0; col < size; col++)
	{
		for (row = 0; row < size; row++)
			printf("%c", search_hole(col, row));

		printf("\n");
	}
}
