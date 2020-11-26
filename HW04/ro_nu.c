#include<stdio.h>
#include<stdint.h>
void roman(int32_t b)
{
    char Thou[4][4]={"M","MM","MMM"};
    char Hun[10][5]={"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    char TE[10][5]={"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    char Un[10][5]={"I","II","III","IV","V","VI","VII","VIII","IX"};
    if(b/1000>0)
        printf("%s",Thou[b/1000-1]);
    b%=1000;
    if(b/100>0)
        printf("%s",Hun[b/100-1]);
    b%=100;
    if(b/10>0)
        printf("%s",TE[b/10-1]);
    b%=10;
    if(b/1>0)
        printf("%s\n",Un[b-1]);
}
