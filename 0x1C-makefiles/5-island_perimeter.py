#!/usr/bin/python3
'''returns the perimeter of the island described in grid'''


def island_perimeter(grid):
    '''this is the function that calcualtes the perimenter of a grid'''
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    for row in range(rows):
        for col in range(cols):
            square_peri = 0

            if grid[row][col] == 1:
                square_peri = 4

                # check if right neighbor cell present
                if col < cols - 1 and grid[row][col + 1] == 1:
                    square_peri -= 1

                # check left negbor cell
                if col > 0 and grid[row][col - 1] == 1:
                    square_peri -= 1

                # check bottom  negbor
                if row < rows - 1 and grid[row + 1][col] == 1:
                    square_peri -= 1

                # check top neighbor
                if row > 0 and grid[row - 1][col]:
                    square_peri -= 1

                perimeter += square_peri

    return perimeter
