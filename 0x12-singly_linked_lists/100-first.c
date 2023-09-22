#include <stdio.h>

/**
 * bmain - attribute to  executed before main
 * attribute - is the character  
 
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
