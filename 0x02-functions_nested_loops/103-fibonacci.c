#include <stdio.h>

/**
 * main - compute and prints even term values
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	unsigned int count, term1, term2, fibn, newterm1, newfibn;

	term1 = 1;
	term2 = 2;

	for (count = 2; count < 50; count++)
	{
		fibn = term1 + term2;
		term1 = term2;
		term2 = fibn;

		if (fibn % 2 == 0)
		{
			if (newfibn <= 4000000)
			{
			newterm1 = fibn;
			newfibn += newterm1;
			}
			else
			{
				break;
			}
		}
	}
	printf("%d\n", newfibn);
	return (0);
}
