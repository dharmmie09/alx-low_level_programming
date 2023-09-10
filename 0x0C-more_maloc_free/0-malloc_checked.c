#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - is the fuction of memory check address 
 * @: is the integer argument used
 * Return: as 0 always
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
