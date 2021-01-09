#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#define int int32_t
void Push(int *arr,int *len,int x)
{
    int _len= *len;
    if(_len==10)
    {
        for(int i=1;i<_len;i++) arr[i-1]=arr[i];
        arr[_len-1]=x;
        *len=_len;
    }
    else if(_len<10) 
    {
        arr[_len++]=x;
        *len=_len;
    }
    // for(int i=0;i<_len;i++) printf("%d ",arr[i]);
    // printf("\n");
}
