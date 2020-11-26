#include<stdio.h>
#include<stdint.h>
#define int int32_t
signed main()
{
    int a,b,emp=0,tot=0;
    printf("Please enter the Gashapon number: ");
    if(scanf("%d",&a)){};
    if(a<0) return printf("Input Error\n"),0;
    printf("Please enter the exchange number: ");
    if(scanf("%d",&b)){};
    if(b<=1) return printf("Input Error\n"),0;
    emp=a;
    tot+=a;
    while(emp>=b)
    {
        int tmp=emp/b;
        tot+=emp/b;
        emp%=b;
        emp+=tmp;
    }
    printf("You can totally open %d Gashapon balls.\n",tot);
    return 0;
}
