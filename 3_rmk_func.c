#include "3_rmk_head.h"

double func(double x, FILE *f)
{
    double sum1 = 0., current = 0.;
 
    rewind (f);
    fscanf (f, "%lf", &current);
    sum1 = current;
    
    while (fscanf(f, "%lf", &current) == 1)
    {
        sum1 = sum1 * x + current;  
    }
    return sum1;
}