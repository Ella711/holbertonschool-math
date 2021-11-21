#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - displays complex numbers
 * @c: struct with complex numbers
 */

void display_complex_number(complex c)
{
	char operator;
	float im_value;

	if (c.im < 0)
		im_value = (-(c.im));
	else
		im_value = c.im;

	if (c.im == 0)
		printf("%.f\n", c.re);


	if (im_value > 0)
	{
		if (c.im > 0)
			operator = '+';
		else
			operator = '-';

		if (im_value == 1)
			printf("%.f %c i\n", c.re, operator);
		else
			printf("%.f %c %.fi\n", c.re, operator, im_value);
	}

}

