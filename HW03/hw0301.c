#include<stdio.h>
#include<stdint.h>
#include<string.h>
#define int int32_t
int a,b;
int str[10005][10005];
signed main()
{
    int x,y,tot=0,width=0;
    printf("Please enter the width : ");
    if(scanf("%d",&a)){};
    if(a<=0) return printf("Input Error!\n"),0;
    printf("Please enter the height : ");
    if(scanf("%d",&b)){};
    if(b<=0) return printf("Input Error!\n"),0;
    tot=str[x=0][y=0]=1;
    int tt=a*b;
    while(tt!=0)
    {
        tt/=10;
        width++;
    }
    while(tot<a*b)
    {
        while(y+1<a && !str[x][y+1]) str[x][++y]=++tot;//right
        while(x+1<b && !str[x+1][y]) str[++x][y]=++tot;//down
        while(y-1>=0 && !str[x][y-1]) str[x][--y]=++tot;//left
        while(x-1>=0 && !str[x-1][y]) str[--x][y]=++tot;//up
    }
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
            printf("%*d ",width,str[i][j]);
        printf("\n");
    }
    return 0;
}
