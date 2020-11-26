#include<stdio.h>
#include<stdint.h>
#define int int32_t
signed main()
{
    int a,b,flaga=0,flagb=0;
    printf("Please enter the 1st integer: ");
    if(scanf("%d",&a)){};
    int c=a;
    while(c!=0)
    {
        c/=10;
        flaga++;
    }
    int poa=1,pob=1;
    for(int i=0;i<flaga-1;i++) poa*=10;
    if(a<0) return printf("Input Error!\n"),0;
    int  pooa=poa;
    int tmpa=(a/pooa)%10;
    pooa/=10;
    while(pooa!=0)
    {
        if(tmpa>(a/pooa)%10)
            return printf("Input Error!\n");
        tmpa=(a/pooa)%10;
        pooa/=10;
    }
    printf("Please enter the 2nd integer: ");
    if(scanf("%d",&b)){};
    int d=b;
    if(b<0) return printf("Input Error!\n"),0; 
    while(d!=0)
    {
        d/=10;
        flagb++;
    }
    for(int i=0;i<flagb-1;i++) pob*=10;
    int  poob=pob;
    int tmpb=(b/poob)%10;
    poob/=10;
    while(poob!=0)
    {
        if(tmpb>(b/poob)%10)
            return printf("Input Error!\n");
        tmpb=(b/poob)%10;
        poob/=10;
    }
    if(a==0) poa=1;
    if(b==0) pob=1;
    while(poa!=0 || pob!=0)
    {
        //printf("%d %d %d %d\n",(a/poa)%10,(b/pob)%10,poa,pob);
        if((a/poa)%10 <= (b/pob)%10)
        {
            if(a!=0)
            printf("%d",(a/poa)%10);
            poa/=10;
            if(poa==0)
            while(pob>0)
            {
                printf("%d",(b/pob)%10);
                pob/=10;
            }
        }
        else
        {
            if(b!=0)
            printf("%d",(b/pob)%10);
            pob/=10;
            if(pob==0)
            while(poa>0)
            {
                printf("%d",(a/poa)%10);
                poa/=10;
            }
        }
    }
    return 0;
}
