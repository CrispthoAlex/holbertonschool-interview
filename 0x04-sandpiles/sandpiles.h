#ifndef _SANDPILES_H_
#define _SANDPILES_H_
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
bool isStable(int grid1[3][3]);
void toppling(int grid1[3][3], int grid2[3][3]);
void other_print_grid(int grid[3][3]);

#endif /* _SANDPILES_ */
