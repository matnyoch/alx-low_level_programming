#include <stdio.h>

/**
 * main - nested function
 * Return: return 0 (success)
 */

int main(void)
{
	int i,j;

	for (i = 0;i<= 3;i++)
	{
		printf("start of Outer loop, %d\n", i);

		for (j = 0;j<= 3;j++)
		{
			printf("inner loop, %d\n", j);
		}	

		printf("end of outer loop,%d\n",i);
	}
	return (0);
}
