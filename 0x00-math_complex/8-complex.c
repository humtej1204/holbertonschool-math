#include "holberton.h"
/**
 * complex_from_mod_arg - function that update the real and the
 * imaginary parts of
 * a complex number given its modulus and arguments.
 *
 * @m: Parameter
 * @arg: Parameter
 * @c3: Parameter pointer to structure
 *
 * Return: return the multiplication
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
