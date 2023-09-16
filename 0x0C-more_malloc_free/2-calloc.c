#include "main.h"
#include <stdlib.h>
/**
 * _calloc - is the allocate memory to array function
 * @nmemb: is the array of each bytes
 * @size is the byte for the allocated memory
 * Return: as 0 always
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (calloc(nmemb, size));
}
