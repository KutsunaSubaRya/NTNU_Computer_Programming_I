#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include "hanoi.h"
#define int int32_t
signed main()
{
    int n;
    printf("Please enter the disk number (2~20): ");
    if(scanf("%d",&n)){};
    if(n<2 || n>20) return printf("Invalid Input!\n"),0;
    hanoi(n,1,3,2);
    return 0;
}
