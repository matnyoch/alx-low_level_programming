#include <stdio.h>

/**
 * main - entry point
 * Description: it print lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
