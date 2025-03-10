#include "main.h"

/* Function prototype for sqrt_helper */
int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of 'n', or -1 if 'n' has no natural square root
 */
int _square_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper -helper function to find the square root
 * @n: the number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: the square root of 'n', or -1 if no natural square root exists
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, guess + 1));
}
