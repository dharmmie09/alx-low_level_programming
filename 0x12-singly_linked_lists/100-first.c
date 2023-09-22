#include <stdio.h>
#include "lists.h"
/**
 * premain - name of the function
 * constructor: is the gcc specific attribute
 * attribute: the main function before execution
 */
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
