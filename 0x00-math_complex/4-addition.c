#include "holberton.h"
/**
 * addition - function that performs the addition operation to complex numbers
 *
 * @c1: Parameter structure 1
 * @c2: Parameter structure 2
 * @c3: Parameter pointer to structure
 *
 * Return: return the sum
 */
void addition(complex c1, complex c2, complex *c3)
{
        c3->re = c1.re + c2.re;
        c3->im = c1.im + c2.im;
}
