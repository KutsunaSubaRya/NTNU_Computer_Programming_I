#include<stdio.h>
#include<stdint.h>
#include "LR.h"
#define int int32_t
signed main()
{
    int sz;
    printf("Please enter the point number: ");
    if(scanf("%d",&sz)){};
    if(sz<=0) return printf("Invalid input!\n"),0;
    double x[sz+1],y[sz+1];
    for(int i=0;i<sz;i++)
    {
        printf("Please enter Point %d: ",i+1);
        if(scanf("%lf %lf",&x[i],&y[i])){};
    }
    double lr=LR(x,y,sz),sx=LR(x,x,sz),xm=M(x,sz),ym=M(y,sz);
    printf("Regression Equation: y = %lf x + %lf\n",lr/sx,ym-((lr/sx)*xm));
    return 0;
}
