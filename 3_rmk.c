#include <stdio.h>
#include "3_rmk_head.h"

int main(void)
{
    double x;
    scanf ("%lf", &x);
    
    FILE *f = fopen("3_rmk_data.txt", "r");
    if (f == NULL) // Исправили на ==
    {
        printf ("file error\n");
        return -1;
    }
    
    double a = func(x, f);        
    double b = func_proizv(x, f); 
    
    printf ("%lf\n", a);
    printf ("%lf\n", b);
    
    fclose(f);
    return 0;
}