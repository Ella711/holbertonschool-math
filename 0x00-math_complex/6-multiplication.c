#include "holberton.h"

/**
 * multiplication - multiplys complex numbers
 * @c1: struct with complex numbers
 * @c2: struct with complex numbers
 * @c3: struct with complex numbers
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) + ((c1.im * c2.im) * (-1));
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}

