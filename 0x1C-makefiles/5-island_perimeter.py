#!/usr/bin/python3
"""Defines the island_permiter function"""


def island_perimeter(grid):
    """returns the perimeter of an island

    grid is a list of list of integers:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island
    The island doesn’t have “lakes” (water inside that isn’t connected
    to the water around the island).

    Args:
        grid (list) : A list of list of integers representing an island

    Returns:
        the perimeter of the island in grid
    """

    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                size += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    edges += 1
                if (row > 0 and grid[row - 1][col] == 1):
                    edges += 1
    return 4 * size - 2 * edges
