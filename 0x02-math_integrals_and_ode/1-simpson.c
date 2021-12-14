#include "simpson.h"
/**
 * simpson - method to find the integral aprox.
 * with the Simpson's Method
 *
 * @a: initial point of the interval
 * @b: final point of the interval
 * @steps: amount of subintervals
 *
 * Return: the aprox of the integral
 */
double simpson(double a, double b, int steps)
{
	double var_x = (b - a) / steps,
	f_x,
	x = a,
	res = 0;
	int i = 0;

	while (i <= steps)
	{
		f_x = (var_x / 3) * (1 / (1 + (x * x)));
		if (i == 0)
		{
			f_x = f_x;
		}
		else if (i == steps)
		{
			f_x = f_x;
		}
		else if (i % 2 == 1)
		{
			f_x = f_x * 4;
		}
		else if (i % 2 == 0)
		{
			f_x = f_x * 2;
		}
		res = res + f_x;
		x = x + var_x;
		i++;
	}

	return (res);
}
