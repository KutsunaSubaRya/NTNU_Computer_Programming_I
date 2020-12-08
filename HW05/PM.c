#include<stdio.h>
#include<stdint.h>
#define int int32_t
void PM(int w, int h, char (*str)[20])
{
    int bar=3+w*3;
    printf("   ");
    for(int i=0;i<w;i++)
    {    
        if(i<=9) printf("0%d ",i);
        else printf("%d ",i);
    }
    printf("\n");
    for(int i=0;i<bar;i++) printf("-");
    printf("\n");
    for(int i=0;i<h;i++)
    {
        if(i<=9) printf("0%d| ",i);
        else printf("%d| ",i);
        for(int j=0;j<w;j++) printf("%c  ",str[i][j]);
        printf("\n");
    }
}

void BOOM(int w, int h, char (*str)[20], char (*chk)[20])
{
    int bar=3+w*3;
    printf("   ");
    for(int i=0;i<w;i++)
    {    
        if(i<=9) printf("0%d ",i);
        else printf("%d ",i);
    }
    printf("\n");
    for(int i=0;i<bar;i++) printf("-");
    printf("\n");
    for(int i=0;i<h;i++)
    {
        if(i<=9) printf("0%d| ",i);
        else printf("%d| ",i);
        for(int j=0;j<w;j++) 
        {
            if(chk[i][j]=='B') printf("%c  ",chk[i][j]);
            else printf("%c  ",str[i][j]);
        }
        printf("\n");
    }
}
