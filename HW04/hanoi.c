#include<stdio.h>
#include<stdint.h>
#define int int32_t
void hanoi(int n, int a, int b, int c)
{
    if(n==1) printf("move disk %d to rod %d\n",n,c);
    else
    {
        hanoi(n-1,a,c,b);
        printf("move disk %d to rod %d\n",n,c);
        hanoi(n-1,b,a,c);
    }
}
