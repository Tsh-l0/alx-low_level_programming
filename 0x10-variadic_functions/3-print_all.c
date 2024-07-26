#include "variadic_functions.h"

/**
 * print_all - Prints all arguments when specified
 *
 * @format: Specifies all necessary operations
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	int flag = 0;
	char *str;
	va_list arg_list;

	va_start(arg_list, format);

	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(arg_list, int));
				flag = 0;
				break;

			case 'i':
				printf("%i", va_arg(arg_list, int));
				flag = 0;
				break;

			case 'f':
				printf("%f", va_arg(arg_list, double));
				flag = 0;
				break;

			case 's':
				str = va_arg(arg_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;

			default:
				flag = 1;
				break;
		}

		if (format[a + 1] != '\0' && flag == 0)
			printf(", ");

		a++;
	}

	printf("\n");
	va_end(arg_list);
}
