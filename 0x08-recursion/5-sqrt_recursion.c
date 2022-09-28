#include "main.h"
/**
* _sqrt - function that returns the natural square root of a number
* @x: number
* @y: number
* Return: sum
*/

int _sqrt(int x, int y)
{
	int sum;

	sum = x - y;
	if (sum < 0)
	{
		return (-(y / 2) - 1);
	if (sum == 0)
		return (1);
	else
		return (1 + _sqrt(sum, y + 2));
}
