#include "holberton.h"
#include <stdio.h>

/**
 * conjugate - conjugates a given complex number
 * @c: struct with complex numbers
 * Return: conjugate of complex number
 */

complex conjugate(complex c)
{
	c.im = (-(c.im));
	c.re = c.re;
	return (c);
}

