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

void display_complex_number(complex c);
typedef struct complex_number complex;

#endif
