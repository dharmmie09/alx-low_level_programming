#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - printing random no and giving info abt its xter
 *
 * Description: Check the character
 * Return: always (0)
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf
