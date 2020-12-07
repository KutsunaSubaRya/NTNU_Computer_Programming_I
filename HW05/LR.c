#include<stdio.h>
#include<stdint.h>
#define int int32_t
double M(double a[],int sz)
{
    double tot=0.0;
    for(int i=0;i<sz;i++) tot+=a[i];
    return tot/(double)sz;
}
double LR(double x[], double y[], int sz)
{
    double xm=M(x,sz),ym=M(y,sz),tot=0.0;
    for(int i=0;i<sz;i++) tot+=(x[i]-xm)*(y[i]-ym);
    return tot/(double)sz;
}
