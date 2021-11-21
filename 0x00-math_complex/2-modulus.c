#include "holberton.h"

/**
 * modulus - returns modulus of a given complex number
 * @c: struct with complex numbers
 * Return: modulus of complex number
 */

double modulus(complex c)
{
	double mod;

	mod = hypot(c.re, c.im);
	return (mod);
}

