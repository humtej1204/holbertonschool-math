#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <math.h>

/**
 * struct complex_number - Struct with the elements
 *
 * @re: real member
 * @im: imaginary member
 *
 * Description: structure with the imaginary number
 * members
 */
struct complex_number
{
	double re;
	double im;
};
typedef struct complex_number complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif
