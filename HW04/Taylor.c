#include<stdio.h>
#include<stdint.h>
#define int int32_t
void Taylor(int k) 
{
    double tot = 2.0, tmp = 1.0;
    tot = 2.0;
    for(int i=2;i<=k;i++)
    {
        tmp = 1.0;
        for(int j=2;j<=i;j++) tmp /= (double)j;
        tot += tmp;
    }
    printf("%.50lf\n", tot);
    //for(int n = 0; n < 100; n++)
    //printf("%.*lf\n", n, tot);
}
