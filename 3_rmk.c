#include <stdio.h>
#include "3_rmk_head.h"

int main(void)
{
    double x;
    FILE *f;
    double a, b;             

    scanf("%lf", &x);

    f = fopen("3_rmk_data.txt", "r");
    if (f == NULL)
    {
        printf("file error\n");
        return -1;
    }

    a = func(x, f);       
    b = g_deriv;

    printf("%lf\n", a);
    printf("%lf\n", b);

    fclose(f);
    return 0;
}