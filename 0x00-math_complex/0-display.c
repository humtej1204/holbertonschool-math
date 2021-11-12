#include "holberton.h"
/**
 * display_complex_number - function to show an imaginary number
 *
 * @c: Parameter
 */
void display_complex_number(complex c)
{
	char x;

	x = (c.im < 0) ? '-' : '+';

	if (c.im == 0)
	{
		printf("%.9g\n", c.re);
	}
	else if (c.re == 0)
	{
		if (c.im == 1)
		{
			printf("i\n");
			return;
		}
		else if (c.im == -1)
		{
			printf("-i\n");
			return;
		}
		printf("%.9gi\n", c.im);
	}
	else
	{
		c.im = (c.im < 0) ? -(c.im) : c.im;
		if (c.im == 1)
		{
			printf("%.9g %c i\n", c.re, x);
			return;
		}
		else if (c.im == -1)
		{
			printf("%.9g %c -i\n", c.re, x);
			return;
		}
		printf("%.9g %c %.9gi\n", c.re, x, c.im);
	}
}
