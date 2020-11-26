#include<stdio.h>
#include<stdint.h>
#define int int32_t
void resist(double n, double r)
{
    double tot=r;
    for(int i=1;i<n;i++) tot=((tot+r)*r)/(tot+r*2);
    printf("%lf\n",tot+r);
}
