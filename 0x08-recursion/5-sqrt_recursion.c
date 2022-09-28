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

/**
 * _sqrt_recursion - evaluate sqrt
 * @n: interger
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
