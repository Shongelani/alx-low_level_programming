#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function that returns a sum of two numbers
 * @a: input 1
 * @b: input 2
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns a difference between two numbers
 * @a: input 1
 * @b: input 2
 * Return: a difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns a product of two numbers
 * @a: input 1
 * @b: input 2
 * Return: a product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns division of two numbers
 * @a: input 1
 * @b: input 2
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that returns a modulus of two numbers
 * @a: input 1
 * @b: input 2
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
