#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/*
  * _char - prints a char
  * @ptr: pointer
  * @arg_list: takes in an argument list as a parameter
  */
void _char(char *ptr, va_list arg_list)
{
	printf("%s%c", ptr, va_arg(arg_list, int));
}
/*
  * _int - prints an  integer
  * @ptr: pointer
  * @arg_list: takes in an argument list as a parameter
  */
void _int(char *ptr, va_list arg_list)
{
	printf("%s%d", ptr, va_arg(arg_list, int));
}
/*
  * _float - prints a float
  * @ptr: pointer
  * @arg_list: takes in an argument list as a parameter
  */
void _float(char *ptr, va_list arg_list)
{
	printf("%s%f", ptr, va_arg(arg_list, double));
}
/*
  * _float - prints a float
  * @ptr: pointer
  * @arg_list: takes in an argument list as a parameter
  */
void _string(char *ptr, va_list arg_list)
{
	char *lol;

	lol = va_arg(arg_list, char *);
	if (lol == NULL)
		lol = "(nil)";
	printf("%s%s", ptr, lol);
}

/*
 * print_all - function that prints anything
 * @format: type of argument passed to the funciton
 * Return: 0
*/

void print_all(const char * const format, ...)
{
        int kd, sc;
        va_list arg_list;
        char *ptr;

        operations_t arr[] = {
                {"c", _char},
                {"i", _int},
                {"f", _float},
                {"s", _string},
                {NULL, NULL}
        };
	va_start(arg_list, format);
        ptr = "";
	for (kd = 0; format[kd] != '\0' && format != NULL; kd++)
        {
                for (sc = 0; arr[sc].z != NULL; sc++)
                {
                        if (format[kd] == arr[sc].z[0])
                        {
                                arr[sc].f(ptr, arg_list);
                                ptr = ", ";
                        }
                }
        }
        printf("\n");
        va_end(arg_list);
}
