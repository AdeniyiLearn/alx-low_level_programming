#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function checks if it is an alphabet
 *
 * Return: returns Void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		if (i < 10)
		{
			for (j = 0; j < 60; j++)
			{
				if (j < 10)
				{
					printf("0%d", i);
					printf(":0%d", j);
				}
				if (j > 9)
				{
					printf("0%d", i);
					printf(":%d", j);
				}
			putchar('\n');
			}
		}
		if (i > 9)
		{
			for (j = 0; j < 60; j++)
			{
				if (j < 10)
				{
					printf("%d", i);
					printf(":0%d", j);
				}
				if (j > 9)
				{
					printf("%d", i);
					printf(":%d", j);
				}
			putchar('\n');
			}
		}
	}
}
