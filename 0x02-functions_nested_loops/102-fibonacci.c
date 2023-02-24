#include <stdio.h>

/**
 * main - compute and prints sum of natural numbers below 1024
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	unsigned int count, term1, term2, fibn;

	term1 = 1;
	term2 = 2;
	printf("%d, %d, ", term1, term2);

	for (count = 2; count < 50; count++)
	{
		if (count < 49)
		{
			fibn = term1 + term2;
			printf("%u, ", fibn);
			term1 = term2;
			term2 = fibn;
		}
	}
	fibn = term1 + term2;
	printf("%u\n", fibn);
	return (0);
}
