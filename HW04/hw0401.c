#include<stdio.h>
#include<stdint.h>
#include "ro_nu.h"
#define int int32_t
signed main()
{
    int a;
    if(scanf("%d",&a)){};
    if(a>3000 || a<1) return printf("Invalid Input\n"),0;
    roman(a);
    return 0;
}
