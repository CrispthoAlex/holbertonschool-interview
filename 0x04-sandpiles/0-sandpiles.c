#include "sandpiles.h"

/**
 * sandpiles_sum - computes the sum of two sandpiles
 *
 * @grid1: Grid 3x3 to add
 * @grid2: Grid 3x3 to add
 * Return: void
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int col, row; /* Dimension of grids*/

	for (col = 0; col < 3 ; col++)
		for (row = 0; row < 3; row++)
			grid1[col][row] += grid2[col][row];
	/* boolean function to check grid1 stability */
	if (isStable(grid1) == false)
		other_print_grid(grid1);
	/* While grid1 has unstable piles (false) there will be */
	/* toppling and printing */
	while (isStable(grid1) == false)
	{
		toppling(grid1);
		if (isStable(grid1) == false)
			other_print_grid(grid1);
	}
}

/**
 * isStable - Check if there is unstablility.
 * @grid1: grid to be check.
 * Return: true if it's stable, else false.
 */
bool isStable(int grid1[3][3])
{
	int col, row;

	for (col = 0; col < 3 ; col++)
		for (row = 0; row < 3; row++)
			if (grid1[col][row] > 3)
				return (false);
	return (true);
}

/**
 * other_print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
void other_print_grid(int grid[3][3])
{
	int col, row;

	printf("=\n");
	for (col = 0; col < 3 ; col++)
	{
		for (row = 0; row < 3; row++)
		{
			if (row)
				printf(" ");
			printf("%d", grid[col][row]);
		}
		printf("\n");
	}
}

/**
 * toppling - Topple the unstable piles of grid1. Affect all grid.
 * @grid1: Grid 3x3 to be toppled
 */
void toppling(int grid1[3][3])
{
	int gridZero[3][3];
	int col, row;

	for (col = 0; col < 3 ; col++)
		for (row = 0; row < 3; row++)
			gridZero[col][row] = 0;

	for (col = 0; col < 3 ; col++)
	{
		for (row = 0; row < 3; row++)
		{
			if (grid1[col][row] > 3)
			{
				if (row > 0)/* Up */
					gridZero[col][row - 1] += 1;
				if (col <= 1)/* Right */
					gridZero[col + 1][row] += 1;
				if (row <= 1)/* Down */
					gridZero[col][row + 1] += 1;
				if (col > 0)/* Left */
					gridZero[col - 1][row] += 1;

				/* 4 grains less */
				grid1[col][row] -= 4;
			}
		}
	}
	for (col = 0; col < 3 ; col++)
		for (row = 0; row < 3; row++)
			grid1[col][row] += gridZero[col][row];
}
