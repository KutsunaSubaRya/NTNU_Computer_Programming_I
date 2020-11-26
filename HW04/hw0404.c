#include<stdio.h>
#include<stdint.h>
#include "resist.h"
#define int int32_t
signed main()
{
    int r,n;
    printf("Please enter the resistance (1~100): ");
    if(scanf("%d",&r)){};
    if(r>100 || r<1) return printf("Invalid Input!\n"),0;
    printf("Please enter n (1~100): ");
    if(scanf("%d",&n)){};
    if(n>100 || n<1) return printf("Invalid Input!\n"),0;
    resist((double)n,(double)r);
    return 0;
}
