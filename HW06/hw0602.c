#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<math.h>
#include "RaU.h"
#define int int32_t
signed main()
{
    
    int a,arr[101],buf[101],len=0,flag=0;
    printf("input: ");
    while(scanf("%d",&a) && a!=0)
    {
        if(a==-1)
        {
            if(len==0) continue;
            buf[flag++]=arr[--len]; 
        } 
        else if(a==-2)
        {
            if(flag==0) continue;
            arr[len++]=buf[--flag];
        }
        else 
        {
            Push(arr,&len,a);
            for(int i=0;i<flag;i++) buf[i]=0;
            flag=0;
        }
        printf("input: ");
    }
    printf("Result: ");
    for(int i=0;i<len;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
