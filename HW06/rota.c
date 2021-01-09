#include<math.h>
#define PI acos(-1.0)
void rota(double *x, double *y, double theta)
{
    double tmp_x=*x, tmp_y=*y;
    *x=(*x)*cos((-theta*PI)/180)-(*y)*sin((-theta*PI)/180);
    *y=(tmp_y)*cos((-theta*PI)/180)+(tmp_x)*sin((-theta*PI)/180);
}
