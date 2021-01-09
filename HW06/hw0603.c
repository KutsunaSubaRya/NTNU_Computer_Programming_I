#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include "rota.h"
#define int int32_t
#define PI 3.14159265
signed main()
{
    double x,y,deg;
    printf("Please enter a point: ");
    if(scanf("%lf %lf",&x, &y)){};
    printf("Please enter theta (0-360): ");
    if(scanf("%lf",&deg)){};
    if(deg>360 || deg<0) return printf("Invalid Input!\n"),0;
    rota(&x,&y,deg);
    printf("%lf %lf",x,y); 
    return 0;
}
