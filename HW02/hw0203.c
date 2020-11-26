#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#define int int32_t
int main()
{
    int sa,ma,fa,inc,sa_in,D_T,pc,dp,Tt=0;
    printf("Gross salary: "); if(scanf("%d",&sa)){};
    if(sa<0) return printf("Input Error!\n"),0;
    printf("Married? (0/1): "); if(scanf("%d",&ma)){};
    if(ma!=0 && ma!=1) return printf("Input Error!\n"),0;
    printf("How many people are there in your family: "); if(scanf("%d",&fa)){};
    if(fa<=0) return printf("Input Error!\n");
    printf("How many people in your family have income: "); if(scanf("%d",&inc)){};
    if(inc>fa) return printf("Input Error\n"),0;
    printf("Special Deduction for Savings and Investment: "); if(scanf("%d",&sa_in)){};
    if(sa_in<0) return printf("Input Error!\n"),0;
    printf("Special Deduction for Tuition: "); if(scanf("%d",&D_T)){};
    if(D_T<0) return printf("Input Error!\n"),0;
    printf("How many preschool children: "); if(scanf("%d",&pc)){};
    if(pc<0 || pc>fa-1) return printf("Input Error!\n"),0;
    printf("How many disable people: "); if(scanf("%d",&dp)){};
    if(dp<0 || dp>fa) return printf("Input Error!\n"),0;
    Tt=sa-(sa_in+inc*200000+D_T+dp*200000+fa*88000)-240000;
    if(Tt>=0 && Tt<=540000)
        Tt/=20;
    else if(Tt>=540001 && Tt<=1210000)
    {
        Tt=Tt*12/100;
        Tt-=37800;
    }
    else if(Tt>=1210001 && Tt<=2420000)
    {
        Tt/=5;
        Tt-=134600;
    }
    else if(Tt>=2420001 && Tt<=4530000)
    {
        Tt=Tt*3/10;
        Tt-=376600;
    }
    else if(Tt>=4530001)
    {
        Tt=Tt*2/5;
        Tt-=829600;
    }
    
    printf("Total tax: %d",Tt);
    return 0;
}
