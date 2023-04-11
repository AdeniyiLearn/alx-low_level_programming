#include "main.h"

/**
 * binary_to_uint - Function converts a binaty number to an unsigned int
 * @b: strings of binary
 * Return: converted number of 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	const char *numString = b;
	unsigned int num = 0, len, count = 0;

	if (b == NULL)
	{
	return (0);
	}

	len = strlen(numString) - 1;
	while (numString[count])
	{
		if (numString[count] == '0' || numString[count] == '1')
		{
			if (numString[count] == '0')
			{
				num += 0;
		}
			else if (numString[count] == '1')
			{
				num += raise_to_pow(len);
			}

			len--;
			count++;
		}
	else
			return (0);


	}
	return (num);

}

/**
 * raise_to_pow - function raise binary to 2 power of it's index
 * @len: the index that binary character represents
 * Return: result
 *
 */

unsigned int raise_to_pow(unsigned int len)
{
	unsigned int counter, rec, num = 1;

	rec = len;
	for (counter = 0; counter < rec; counter++)
	{
		num *= 2;
	}

	return (num);
}
