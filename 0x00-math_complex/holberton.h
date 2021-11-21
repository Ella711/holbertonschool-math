#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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

#endif /* MAIN_HEADER */

