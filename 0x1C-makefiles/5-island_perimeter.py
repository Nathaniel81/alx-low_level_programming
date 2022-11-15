#!/usr/bin/python3

"""Documentation for island_perimeter function"""


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid """
    height = len(grid)
    width = len(grid[0])
    p = 0
    conections = 0

    for i in range(0, height):
        for j in range(0, width):
            if grid[i][j] == 1:
                p += 4
                if i > 0 and grid[i - 1][j] == 1:
                    conections += 1
                if j > 0 and grid[i][j - 1] == 1:
                    conections += 1
    return p - (conections * 2)
