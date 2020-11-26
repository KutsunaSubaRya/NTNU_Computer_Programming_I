#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<float.h>
#include<math.h>
#define int int32_t
int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d,e,f,ans_x,ans_y;
    printf("Please enter the first line: ");
    if(scanf(" (%lf,%lf) ,(%lf,%lf)",&x1,&y1,&x2,&y2)){};
    printf("Please enter the second line: ");
    if(scanf(" (%lf,%lf) ,(%lf,%lf)",&x3,&y3,&x4,&y4)){};
    if(((x2-x1)*y3==(y2-y1)*x3+y1*x2-x1*y2) && ((x2-x1)*y4==(y2-y1)*x4+y1*x2-x1*y2)) return printf("Overlapping!\n"),0;
    if((y2-y1)*(x4-x3)==(y4-y3)*(x2-x1)) return printf("No intersection!"),0;
    a=(-y2+y1);
    b=(x2-x1);
    c=(-1*y2*x1+x2*y1);
    d=(-y4+y3);
    e=(x4-x3);
    f=(-1*y4*x3+x4*y3);
    if(c*e-b*f==0.0) ans_x=0.0;
    else ans_x=(c*e-b*f)/(a*e-d*b);
    if(a*f-d*c==0.0) ans_y=0.0;
    else ans_y=(a*f-d*c)/(a*e-d*b);
    printf("Intersection: (%lf,%lf)",ans_x,ans_y);
    return 0;
}
