#include "rectangle.h"
/**
 * rectangle_method - method to find the integral aprox.
 * with the rectangle_method
 *
 * @a: initial point of the interval
 * @b: final point of the interval
 * @steps: amount of subintervals
 *
 * Return: the aprox of the integral
 */
double rectangle_method(double a, double b, int steps)
{
	double var_x = (b - a) / steps,
	f_x,
	lp_x = (a) / 2,
	res = 0;
	int i = 0;

	/* Aprox. with Left Point */
	while (i < steps)
	{
		f_x = var_x * (1 / (1 + (lp_x * lp_x)));
		res = res + f_x;
		lp_x = lp_x + var_x;
		i++;
	}

	return (res);
}
