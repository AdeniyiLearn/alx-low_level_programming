#include <stdio.h>

/**
 * main - compute and prints sum of natural numbers below 1024
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	int incNum, nNum, con1;

	incNum = 0;
	nNum = 1024;
	con2 = 0;

	while (incNum <= nNum)
	{
		if (incNum % 3 == 0 || incNum % 5 == 0)
		{
			con1 += incNum;
		}
		incNum++;
	}
	printf("%d\n", incNum);
	return (0);
}
