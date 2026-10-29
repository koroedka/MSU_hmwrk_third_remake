#include "3_rmk_head.h"

double g_deriv = 0.0;

double func(double x, FILE *f)
{
    double sum1 = 0., sum2 = 0., current = 0.;
    int len = func_len(f);

    if (fscanf(f, "%lf", &current) != 1) { g_deriv = 0.0; return 0.0; }

    sum1 = current;
    sum2 = current * len;
    len--;

    while (fscanf(f, "%lf", &current) == 1)
    {
        sum1 = sum1 * x + current;
        if (len > 0)
            sum2 = sum2 * x + current * len;
        len--;
    }

    g_deriv = sum2;
    return sum1;
}