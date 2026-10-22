#include "3_rmk_head.h"

int func_len(FILE *f)
{
	int len = 0;
	rewind (f);
	double current = 0.;
	while (fscanf(f, "%lf", &current) == 1) 
	{
		len++;
	}
	rewind(f);
	return len-1;
}