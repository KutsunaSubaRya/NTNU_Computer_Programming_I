#include<stdio.h>
#include<stdint.h>
#include<math.h>
#define int int32_t
void project(double *x, double *y, double *z, int32_t a, int32_t b, int32_t c
, int32_t d)
{
    double _x=*x,_y=*y,_z=*z;
    double dist=(a*_x+b*_y+c*_z+d)/sqrt(a*a+b*b+c*c);
    *x=-1*_x+a*dist/sqrt(a*a+b*b+c*c);
    *y=-1*_y+b*dist/sqrt(a*a+b*b+c*c); 
    *z=-1*_z+c*dist/sqrt(a*a+b*b+c*c);
}
