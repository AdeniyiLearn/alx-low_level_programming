#include <stdio.h>

/**
 * main - the program's main function
 *
 * Return: return 0 (successful)
 */

int main(void)
{
	int firstNum, i, secondNum, thirdNum;

	i = 44;
	for (firstNum = 48; firstNum <= 56; firstNum++)
	{
		for (secondNum = 49; secondNum < 58; secondNum++)
		{
			if (secondNum < 58)
			{
				for (thirdNum = 50; thirdNum < 58; thirdNum++)
				{
				if (secondNum != firstNum && secondNum != thirdNum && firstNum != thirdNum)
				{
				if ((firstNum - secondNum < 1) && (secondNum - thirdNum < 1))
				{
				putchar(firstNum);
				putchar(secondNum);
				putchar(thirdNum);
				if (firstNum != 55)
				{
				putchar(i);
				putchar(' ');
				}
				}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
