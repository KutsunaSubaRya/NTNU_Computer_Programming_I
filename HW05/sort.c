#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#define int int32_t
int cmpb(const void *a, const void *b)
{
    return *(int *)a >= *(int *)b ? *(int *)a > *(int *)b : -1;
}

int cmps(const void *a, const void *b)
{
    return *(int *)a < *(int *)b ? *(int *)a < *(int *)b : -1;
}
void Sort(int *arr,int sz)
{
    qsort(arr,sz,sizeof(int),cmpb);
    for(int i=0;i<sz;i++) if(arr[i]%2==1) printf("%d ",arr[i]);
    qsort(arr,sz,sizeof(int),cmps);
    for(int i=0;i<sz;i++) if(arr[i]%2==0) printf("%d ",arr[i]);
    printf("\n");
}
