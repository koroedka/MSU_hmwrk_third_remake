#include "3_rmk_head.h"
    
double func_proizv(double x, FILE *f)
{
	double sum2 = 0., current = 0.;
	int len = func_len(f); 
	rewind (f);
	if (fscanf(f, "%lf", &current) != 1) return 0.0; 
	sum2 = current * len; 
	len--;
	while (fscanf(f, "%lf", &current) == 1)
	{
		if (len > 0)
		{
			sum2 = sum2 * x + current * len;
		}
	len--;
	}
	return sum2;
}