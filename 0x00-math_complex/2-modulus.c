#include "holberton.h"
/**
 * modulus - Function that returns the modul of the complex num
 *
 * @c: Parameter
 *
 * Return: returns the modul of the complex num
 */
double modulus(complex c)
{
        return(sqrt(pow(c.re, 2) + pow(c.im, 2)));
}
