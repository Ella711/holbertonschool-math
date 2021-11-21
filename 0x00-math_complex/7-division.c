#include "holberton.h"

/**
 * division - divides complex numbers
 * @c1: struct with complex numbers
 * @c2: struct with complex numbers
 * @c3: struct with complex numbers
 */

void division(complex c1, complex c2, complex *c3)
{
	double denominator;

	denominator = ((c2.re * c2.re) + (c2.im * c2.im));

	c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / denominator;
	c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) / denominator;
}

