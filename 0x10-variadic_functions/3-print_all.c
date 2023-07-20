#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print al things
 * @format: list of types
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char c, *s;
	int n = 0, flag = 0, m = 0, forlength = 0;

	while (format && format[m++])
		forlength++;
	va_start(ap, format);
	while (format && format[n])
	{
		switch (format[n++])
		{
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'c':
			c = (char) va_arg(ap, int);
			printf("%c", c);
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		default:
			flag = 1;
			break;
		}
		if (flag != 1 && n < forlength)
			printf(", ");
		flag = 0;
	}
	printf("\n");
	va_end(ap);
}
