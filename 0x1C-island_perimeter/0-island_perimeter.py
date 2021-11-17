#!/usr/bin/python3
"""
Create a function def island_perimeter(grid) that returns the perimeter
of the island described in grid:
  * grid is a list of list of integers:
  * 0 represents a water zone
  * 1 represents a land zone
  * One cell is a square with side length 1
  * Grid cells are connected horizontally/vertically (not diagonally).
  * Grid is rectangular, width and height dont exceed 100
  * Grid is completely surrounded by water, and there is one island
    (or nothing).
  * The island doesnt have lakes (water inside that isnt connected to the water
    around the island).
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    perimeter = 0
    if type(grid) is list:
        len_m = len(grid)  # size grid
        for r in range(len_m):
            len_r = len(grid[r])  # size row
            for c in range(len_r):
                if grid[r][c] == 1:
                    # Validate positions around of cell/land zone
                    right = grid[r][c + 1] if c + 1 < len_r else 0
                    left = grid[r][c - 1] if c - 1 >= 0 else 0
                    up = grid[r - 1][c] if r - 1 >= 0 else 0
                    down = grid[r + 1][c] if r + 1 < len_m else 0
                    # Perimeter Generator
                    perimeter += 4 * grid[r][c] - (right + left + up + down)
    return perimeter

    # End Island Perimeter
