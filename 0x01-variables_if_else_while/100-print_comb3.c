#include <stdio.h>

/**
 * main - the program's main function
 *
 * Return: return 0 (successful)
 */

int main(void)
{
	int firstNum, i, lastNum;

	i = 44;

	for (firstNum = 48; firstNum <= 56; firstNum++)
	{
		for (lastNum = 49; lastNum < 58; lastNum++)
		{
			if (lastNum < 58)
			{
				if (lastNum != firstNum && (firstNum - lastNum < 1))
				{
					putchar(firstNum);
					putchar(lastNum);
					if (firstNum != 56)
					{
						putchar(i);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
