#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *s, *str = "";

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", str, s);
					break;
				default:
					i++;
					continue;
			}
			str = ", ";
			i++;
		}
		printf("\n");
		va_end(list);
	}
}
