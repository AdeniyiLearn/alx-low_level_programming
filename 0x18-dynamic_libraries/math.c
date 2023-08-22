#include "mathematics.h"
#include <stdio.h>

/**
 * add - adds two integers together
 * @a: first parameter
 * @b: second parater
 * Return: returns the result of the addition
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtract b from a
 * @a: first parameter
 * @b: second parameter
 * Return: returns result
 */

int sub(int a, int b)
{
	return(a - b);
}

/**
 * mul - Multiplies two integers
 * @a: first number given
 * @b: second number given
 * Return: returns result
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divide a by b
 * @a: number to be divided
 * @b: divisor
 * Return: result
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - function gets the remainder of a division
 * @a: The dividend
 * @b: The divisor
 * Return: returns modula
 */

int mod(int a, int b)
{
	return (a % b);
}
