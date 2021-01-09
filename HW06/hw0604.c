#include<stdio.h>
#include<stdint.h>
#include "proj.h"
#define int int32_t
signed main()
{
    int a,b,c,d;
    double x,y,z;
    printf("Please enter the plane: ");
    if(scanf("%d %d %d %d",&a,&b,&c,&d)){};
    printf("The plane is ");
    if(a==1) printf("x");
    else if(a!=0) printf("%dx",a);
    if(a==0)
    {
        if(b==1) printf("y");
        else if(b>0) printf("%dy",b);
        else if(b<0) printf("%dy",b);
    }
    else
    {
        if(b==1) printf("+y");
        else if(b>0) printf("+%dy",b);
        else if(b<0) printf("%dy",b);
    }
    if(a==0 && b==0)
    {
        if(c==1) printf("z");
        else if(c>0) printf("%dz",c);
        else if(c<0) printf("-%dz",c);
    }
    else
    {
        if(c==1) printf("+z");
        else if(c>0) printf("+%dz",c);
        else if(c<0) printf("-%dz",c);
    }
    printf("=%d\nPlease enter the point: ",d);
    if(scanf("%lf %lf %lf",&x,&y,&z)){};
    project(&x,&y,&z,a,b,c,d);
    printf("The projection is (%lf,%lf,%lf)",x,y,z);
    return 0;
}
