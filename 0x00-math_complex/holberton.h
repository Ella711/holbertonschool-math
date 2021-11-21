#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

/**
 * struct complex_display - struct to declare a complex number
 * @re: real number
 * @im: imaginary number
 */

typedef struct complex_display
{
	double re;
	double im;
} complex;

/* displays the complex numbers */
void display_complex_number(complex c);
/* returns the conjugate of a given complex number */
complex conjugate(complex c);
/* returns the modulus of a given complex number */
double modulus(complex c);
/* returns the argument of a given complex number */
double argument(complex c);
/* performas the addition operation to complex numbers */
void addition(complex c1, complex c2, complex *c3);
/* subtracts complex numbers */
void substraction(complex c1, complex c2, complex *c3);
/* multiplies complex numbers */
void multiplication(complex c1, complex c2, complex *c3);
/* divides complex numbers */
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);

#endif /* MAIN_HEADER */

