#include "holberton.h"
/**
 * argument - function that returns the argument of a given complex number
 *
 * @c: Parameter structure
 *
 * Return: returns the argument of a given complex number
 */
double argument(complex c)
{
        double x, ret;

        x = c.im / c.re;
        ret = atan (x);

        return (ret);
}
