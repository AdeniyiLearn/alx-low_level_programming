#include <stdio.h>

/**
 * main - compute and prints even term values
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	long unsigned int count, term1, term2, fibn, newterm1, newfibn;

	term1 = 1;
	term2 = 2;
	printf("%ld, ", term2);

	for (count = 2; count < 50; count++)
	{
		fibn = term1 + term2;
		term1 = term2;
		term2 = fibn;

		if (fibn % 2 == 0)
		{
			newterm1 = fibn;
			newfibn += newterm1;
			printf("%lu", newfibn);
		}
		if (fibn % 2 != 1 && count != 49)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
