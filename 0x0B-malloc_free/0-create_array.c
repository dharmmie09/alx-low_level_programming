#include "main.h"
#include <stdlib.h>
/**
 * *create_array - is the name of the function
 * @size: is the size of array
 * @c: is the user input
 * Return: as 0 always
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
