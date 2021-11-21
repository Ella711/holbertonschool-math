#include "holberton.h"

/**
 * argument - finds argument of a given complex number
 * @c: struct with complex numbers
 * Return: argument of a given complex number
 */

double argument(complex c)
{
	double arg, im_value, re_value;

	im_value = (-(c.im));
	re_value = (-(c.re));

	arg = atan((im_value / re_value));
	return (arg);
}

