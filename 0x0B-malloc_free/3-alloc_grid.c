#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates and initializes a 2D array of integers.
 * @width: the width of the grid.
 * @height: the height of the grid.
 *
 * Return: pointer to the allocated 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/* Handle invalid dimensions */
if (width <= 0 || height <= 0) {
return (NULL);
}

/* Allocate memory for the array of pointers to rows */
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL) {
return (NULL); /* Allocation failure */
}

/* Allocate memory for each row and initialize elements to 0 */
for (i = 0; i < height; i++) {
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL) {

/* Free previously allocated rows on failure */
for (j = 0; j < i; j++) {
free(grid[j]);
}
free(grid);
return (NULL);
}

for (j = 0; j < width; j++) {
grid[i][j] = 0;
}
}

return (grid);
}
