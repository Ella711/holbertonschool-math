#include "holberton.h"

/**
 * addition - adds complex numbers
 * @c1: struct with complex numbers
 * @c2: struct with complex numbers
 * @c3: struct with complex numbers
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}

