#include "holberton.h"

/**
 * division - divides complex numbers
 * @c1: struct with complex numbers
 * @c2: struct with complex numbers
 * @c3: struct with complex numbers
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) + ((c1.im * c2.im) * (-1));
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}

void division(complex c1, complex c2, complex *c3)
{
	complex conjugate, denominator, numerator;

	conjugate.im = (-(c2.im));
	conjugate.re = c2.re;

	multiplication(c1, conjugate, &numerator);
	multiplication(c2, conjugate, &denominator);

	c3->re = numerator.re / denominator.re;
	c3->im = numerator.im / denominator.re;
}

