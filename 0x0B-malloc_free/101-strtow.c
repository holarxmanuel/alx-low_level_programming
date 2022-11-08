#include "main.h"
#include <stdlib.h>


/**
 * empty_grid - grees a 2d array
 * @grid: multidimensional array of char
 * @height: height of the array
 * Return: void
 */
void empty_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string
 * @str: stiring
 * Return: the pointer
 */
char **strtow(char *str)
{
	char **out;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	out = malloc((height + 1) * sizeof(char *));
	if (out == NULL || height == 0)
	{
		free(out);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] !=  '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				out[i] = malloc((c - a1 + 2) * sizeof(char));
				if (out[i] == NULL)
				{
					empty_grid(out, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			out[i][j] = str[a1];
		out[i][j] = '\0';
	}
	out[i] = NULL;
	return (out);
}
