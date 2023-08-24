#!/usr/bin/python3
"""Definition of an island perimeter of the measuring
function we have."""

def island_perimeter(grid):
    """This function returns the perimeter of the island.
    The grid represents water by zero and the land by 1.
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
