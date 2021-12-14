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
        double var_x = (b - a)/steps,
        f_x,
        /*mp_x = (a + a + var_x) / 2,*/
        lp_x = (a) / 2,
        /*rp_x = (a + var_x) / 2,*/
        res = 0;
        int i = 0;

        /* Aprox. with Middle Point
        while(i < steps)
        {
                f_x = var_x * (1/(1 + (mp_x * mp_x)));
                res = res + f_x;
                mp_x = mp_x + var_x;
                printf("%d\n", i);
                i++;
        } */
        /* Aprox. with Left Point */
        while(i < steps)
        {
                f_x = var_x * (1/(1 + (lp_x * lp_x)));
                res = res + f_x;
                lp_x = lp_x + var_x;
                printf("%d\n", i);
                i++;
        }
        /* Aprox. with Right Point
        while(i < steps)
        {
                f_x = var_x * (1/(1 + (rp_x * rp_x)));
                res = res + f_x;
                rp_x = rp_x + var_x;
                printf("%d\n", i);
                i++;
        } */

        return (res);
}
