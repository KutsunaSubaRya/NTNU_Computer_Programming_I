#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<float.h>
#define int int32_t
int main()
{
    char ch;
    float a=0.0,b=0.0,c=0.0,d;
    printf("Please enter a quadratic polynomial (a,b,c): ");
    while(scanf("%f,%f,%f",&a,&b,&c)!=3) return printf("Please input correct format\n"),0;
    ch=getchar();
    if(ch!='\n')
    {
        d=getchar();
        while(d!='\n' && d!=EOF) d=getchar();
        return printf("Please input correct format!\n"),0;
    }
    if(b*b-4*a*c>0) printf("Two distinct real roots.\n");
    else if(b*b-4*a*c==0) printf("One real root.\n");
    else printf("No real roots.\n");
    
    return 0;
}
