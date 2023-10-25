#!/usr/bin/python3
""" This module contains the definition of the function `island_perimeter` """


def island_perimeter(grid):
    """ Returns the perimeter of an island described in `grid`

    Args:
        grid (list): A list of 0s and 1s representing water and land,
        respectively
    """
    p = 0

    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i]) - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0 and grid[i][j + 1] == 0:
                    if grid[i + 1][j] == 0 and grid[i][j - 1] == 0:
                        continue
                if grid[i - 1][j] == 0:
                    p += 1
                if grid[i][j + 1] == 0:
                    p += 1
                if grid[i + 1][j] == 0:
                    p += 1
                if grid[i][j - 1] == 0:
                    p += 1

    return p
