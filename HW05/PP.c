#include<stdio.h>
#include<stdint.h>
#define int int32_t
void PP(int sz, int str[])
{
    int det=0;
    for(int i=0;i<sz;i++) if(str[i]!=0) det=1;
    if(!det)
    {
        printf("0\n");
        return;
    }
    if(str[0]==1) printf("x^%d ",sz-1);
    else if(str[0]==-1) printf("- x^%d ",sz-1);
    else if(str[0]<-1) printf("- %dx^%d ",str[0]*(-1),sz-1);
    else if(str[0]>1) printf("%dx^%d ",str[0],sz-1);
    int f=2;
    for(int i=1;i<sz-2;i++)
    {
        if(str[i]==1) printf("+ x^%d ",sz-f);
        else if(str[i]==-1) printf("- x^%d ",sz-f);
        else if(str[i]<-1) printf("- %dx^%d ",str[i]*(-1),sz-f);
        else if(str[i]>1) printf("+ %dx^%d ",str[i],sz-f);
        f++;
    }
    if(str[sz-2]==1) printf("+ x ");
    else if(str[sz-2]==-1) printf("- x ");
    else if(str[sz-2]<-1) printf("- %dx ",str[sz-2]*(-1));
    else if(str[sz-2]>1) printf("+ %dx ",str[sz-2]);
    if(str[sz-1]>=1) printf("+ %d",str[sz-1]);
    else if(str[sz-1]<=-1) printf("- %d",str[sz-1]*(-1));
    printf("\n");
}
