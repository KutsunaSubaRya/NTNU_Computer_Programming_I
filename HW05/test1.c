#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#define int int32_t
int cmp(const int *a, const int *b)
{
    return *a-*b;
}
signed main()
{
    int arr[]={2,4,9,5,1,3,6,7,8,12};
    int sz=10;
    qsort(arr,sz,sizeof(int32_t),cmp); 
    return 0;
}
