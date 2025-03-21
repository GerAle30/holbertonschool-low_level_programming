#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: First number
 * @b: Second number
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return ((a + b));
}

/**
 * op_sub - Returns the difference of a and b
 * @a: First number
 * @b: Second number
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return ((a - b));
}

/**
 * op_mul - Returns the product of a and b
 * @a: First number
 * @b: Second number
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return ((a * b));
}

/**
 * op_div - Returns the quotient of a and b
 * @a: First number
 * @b: Second number
 * Return: Quotient of a and b, or exist if division by zero
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return ((a / b));
}

/**
 * op_mod - Returns the remainder of the divisiono of a a by b
 * @a: First number
 * @b: Second number
 * Return: Remainder of a divided by b, or exists if division by zero
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a % b));
}
