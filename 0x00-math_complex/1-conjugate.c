#include "holberton.h"
/**
 * conjugate - function that returns the conjugate of a given complex number
 *
 * @c: Parameter structure
 *
 * Return: returns the conjugate of a given complex number
 */
complex conjugate(complex c)
{
	c.im = -c.im;

	return (c);
}
