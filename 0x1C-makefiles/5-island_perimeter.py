#!/usr/bin/python3
"""func returns the perimeter of the island described in grid"""


def island_perimeter(grid):
  """grid is a list of list of integers: 0 water zone, 1 land"""
    perimeter = 0
if grid:
height = len(grid)
width = len(grid[0])
    for i in range(0, height):
        for j in range(0, width):
            if grid[i][j] == 1:
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 0:
                    perimeter += 1
                if j > 0 and grid[i][j - 1] == 0:
                    perimeter += 1
                if i > 0 and grid[i - 1][j] == 0:
                    perimeter += 1
                if i < height - 1 and grid[i + 1][j] == 0:
                    perimeter += 1
                if i == 0 or i == height - 1:
                    perimeter += 1
                if j == 0 or j == len(grid[i]) - 1:
                    perimeter += 1
    return perimeter
