#include "list.h"

void _construction(void) _attribute_((constructor));

/**
 * _constructor -excutes before the main()
 *
 * Return: void
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
