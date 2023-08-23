#!/usr/bin/python3
'''returns the perimeter of the island described in grid'''


def island_perimeter(grid):
    '''this is the function that calcualtes the perimenter of a grid'''
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            square_peri = 0

            if grid[row][col]:
                square_peri = 4

                # check if right neighbor cell present
                if col < len(grid[row]) - 2 and grid[row][col + 1]:
                    square_peri -= 1

                # check left negbor cell
                if col != 0 and grid[row][col - 1]:
                    square_peri -= 1

                # check bottom  negbor
                if row < len(grid) - 2 and grid[row + 1][col]:
                    square_peri -= 1

                # check top neighbor
                if row != 0 and grid[row - 1][col]:
                    square_peri -= 1
                print('sq =', square_peri)
                perimeter += square_peri

    return perimeter
