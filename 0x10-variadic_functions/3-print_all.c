#include "variadic_functions.h"
/**
* print_all - function that prints anything
* @format: is a list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list list;
	int x = 0;
	char *k;
	char *sep = ", ";

	va_start(list, format);
