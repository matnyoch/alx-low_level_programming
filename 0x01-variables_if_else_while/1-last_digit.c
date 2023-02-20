#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that print last digit of n
 * Return: 0 always (success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last > 5)
	{
		printf("Last digit of %i is %l and is  greater than 5\n", last);
	}
	else if (last == 0)
	{
		printf("Last digit of %i is %l and is 0\n", last);
	}
	else
	{
		printf("Last digit of %i is %l and is less than 6 and not 0\n",  last);
	}
	return (0);
}
