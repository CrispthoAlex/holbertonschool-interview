/**
 * sandpiles_sum - computes the sum of two sandpiles
 *
 * @grid1: Grid 3x3 to add
 * @grid2: Grid 3x3 to add
 * Return: void
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int col = 0, row = 0;

	for (; col < 3 ; col++)
	{
		for (; row < 3; row++)
			grid1[col][row] = grid1[col][row] + grid2[col][row];
	}
}
