#include "holberton.h"
/**
 * multiplication - function that performs the multiplication operation to complex numbers
 *
 * @c1: Parameter structure 1
 * @c2: Parameter structure 2
 * @c3: Parameter pointer to structure
 */
void multiplication(complex c1, complex c2, complex *c3)
{
        double m_arg, m_mod;

        m_arg = modulus(c1) * modulus(c2);
        m_mod = argument(c1) + argument(c2);

        c3->re = m_arg * cos(m_mod);
        c3->im = m_arg * sin(m_mod);
}
