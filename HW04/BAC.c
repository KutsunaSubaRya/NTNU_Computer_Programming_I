#include<stdio.h>
#include<stdint.h>
#include<time.h>
#include<stdlib.h>
#define int int32_t
#define YELLOW "\033[1;33m"
#define WHITE "\033[1;37m"
int generate_number(void)
{
    int num=0,a,b,c,d;
    srand(time(NULL));
    while(1) 
    {
        num=(rand()%10000);
        if(num/1000!=0)
        {
            a=num/1000;b=(num/100)%10;c=(num/10)%10;d=num%10;
            if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) break;
        }
    }
    return num;
}
int deter(int gn)
{
    int a,b,c,d;
    a=gn/1000,b=(gn/100)%10,c=(gn/10)%10,d=gn%10;
    if(gn>=10000 || gn<1000) return 1;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) return 0;
    else return 1;
}
int BAC(int gn,int goa)
{
    int A=0,B=0;
    if(gn==goa) return 1;
    int a1=gn/1000,a2=(gn/100)%10,a3=(gn/10)%10,a4=gn%10;
    int b1=goa/1000,b2=(goa/100)%10,b3=(goa/10)%10,b4=goa%10;
    if(a1==b1) A++; 
    if(a2==b2) A++; 
    if(a3==b3) A++; 
    if(a4==b4) A++;
    if(a1==b2 || a1==b3 || a1==b4) B++;
    if(a2==b1 || a2==b3 || a2==b4) B++;
    if(a3==b1 || a3==b2 || a3==b4) B++;
    if(a4==b1 || a4==b2 || a4==b3) B++;
    printf(YELLOW"Response: %d A %d B\n",A,B);
    printf(WHITE);
    return 0;
}
