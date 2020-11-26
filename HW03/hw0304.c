#include<stdio.h>
#include<stdint.h>
#include<float.h>
#define int int32_t
double a,b,c;
void build_f(double a, double b, double c)
{
    if(a==1) printf("x^2");
    else if(a==0) {}
    else printf("%lfx^2",a);
    if (b==1 && a!=0) printf("+x");
    else if(b==1 && a==0) printf("x");
    else if(b==0) {}
    else if(a==0) printf("%lfx",b);
    else printf("+%lfx",b);
    if(a==b && a==0) printf("%lf",c);
    else if(c!=0) printf("+%lf",c);
    printf("\n");
}
signed main()
{
    double s,t;
    printf("Please enter a quadratic polynomial (ax^2+bx+c): ");
    if(scanf(" %lf,%lf,%lf",&a,&b,&c)){};
    printf("This polynomial is ");
    build_f(a,b,c);
    printf("Please enter the interval [s,t]: ");
    if(scanf(" %lf,%lf",&s,&t)){};
    if(t<=s) return printf("Invalid Input!\n"),0;
    printf("The integral: %lf\n",a*t*t*t/3+b*t*t/2+c*t-a*s*s*s/3-b*s*s/2-c*s);
    for(int i=2;i<=65536;i*=2)
    {
        double sum=0;
        for(int j=0;j<=i-1;j++)
        {
            double x=s+(t-s)*(double)j/(double)i;
            sum+=(a*x*x+b*x+c)*(t-s)/(double)i;
        }
        printf("The Riemann sum of n=%d: %lf\n",i,sum);
    }

    return 0;
}
