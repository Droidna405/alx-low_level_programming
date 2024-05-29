#!/usr/bin/python3
"""
Define a function to calculate the perimeter of an island in a grid.

The grid is represented as a list of lists of integers:
    - 0 represents a water zone
    - 1 represents a land zone

The function assumes:
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally)
    - Grid is rectangular, width and height don't exceed 100
    - Grid is completely surrounded by water, and there is one island (or nothing)
    - The island doesn't have "lakes" (water inside that isn't connected to the water around the island)
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the given grid.

    Args:
        grid (list): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.
    """

    perimeter = 0
    rows, cols = len(grid), len(grid[0])


    for row in range(rows):
        for col in range(cols):

            if grid[row][col] == 1:
                perimeter += 4

                if col > 0 and grid[row][col - 1] == 0:
                    perimeter -= 2

                if row > 0 and grid[row - 1][col] == 0:
                    perimeter -= 2

    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
    
