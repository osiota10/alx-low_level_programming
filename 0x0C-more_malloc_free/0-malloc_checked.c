#include "main.h"
#include <stdlib.h>
/**
* *string_nconcat - Function that concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: max bytes of s2
* Return: Returned pointer shall point to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int x, n1 = 0, n2 = 0, i, j;
