#include<stdio.h>
#include<stdint.h>
#include "Taylor.h"
#define int int32_t
signed main()
{
    int k;
    printf("k-th order Taylor polynomial for e\nPLease enter k: ");
    if(scanf("%d",&k)){};
    if(k<1) return printf("Invalid Input!\n"),0;
    Taylor(k);
    return 0;
}
