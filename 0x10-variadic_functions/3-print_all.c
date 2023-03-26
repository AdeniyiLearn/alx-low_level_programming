#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format:  string to be printed between numbers
 * @...: represents all parameters
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int num, xi;
	char x, *xs;
	double xf;
	va_list args;

	num = 0;
	va_start(args, format);
	while (format[num])
	{
		if (format[num] == '\0')
		{
			printf("(nil)");
		}
		switch (format[num])
		{
		case 'c':
			x = va_arg(args, int);
			printf("%c, ", x);
			break;
		case 'i':
			xi = va_arg(args, int);
			printf("%d, ", xi);
			break;
		case 'f':
			xf = va_arg(args, double);
			printf("%f", xf);
			break;
		case 's':
			xs = va_arg(args, char *);
			printf("%s", xs);
			break;
		default:
			break;
		}
		num++;
	}
	printf("\n");
	va_end(args);
}
