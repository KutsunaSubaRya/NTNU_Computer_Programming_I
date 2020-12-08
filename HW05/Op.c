#include<stdio.h>
#include<stdint.h>
#define int int32_t
int dir[9][3]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
int Op(char (*str)[20],char (*chk)[20],int a, int b,int x, int y, int tot)
{
    chk[a][b]='N';
    //printf("%d %d\n",a,b);
    int cnt=0;
    for(int i=0;i<8;i++)
    {
        if(a+dir[i][0]<0 || a+dir[i][0]>x-1 || b+dir[i][1]<0 || b+dir[i][1]>y-1 || chk[a+dir[i][0]][b+dir[i][1]]=='N') continue;
        if(chk[a+dir[i][0]][b+dir[i][1]]=='B') cnt++;
    }
    if(cnt==0)
    {
        tot--;
        str[a][b]=' ';
        for(int i=0;i<8;i++)
        {
            if(a+dir[i][0]<0 || a+dir[i][0]>x-1 || b+dir[i][1]<0 || b+dir[i][1]>y-1 || chk[a+dir[i][0]][b+dir[i][1]]=='N') continue;
            tot=Op(str,chk,a+dir[i][0],b+dir[i][1],x,y,tot);
        }  
    }
    else
    {       
        tot--;
        str[a][b]=cnt+48;
    }
    return tot;
}
