#include<stdio.h>
#include<stdint.h>
#include "PC.h"
#include "PP.h"
#define itnt int32_t
signed main()
{
    int p1,p2;
    //enter p1
    printf("Please enter p1 degree: ");
    if(scanf("%d",&p1)){};p1++;
    int str1[p1+1];
    printf("Please enter p1 coefficients: ");
    for(int i=0;i<p1;i++) if(scanf("%d",&str1[i])){};
    //enter p2
    printf("Please enter p2 degree: ");
    if(scanf("%d",&p2)){};p2++;
    int str2[p2+1];
    printf("Please enter p2 coefficients: ");
    for(int i=0;i<p2;i++) if(scanf("%d",&str2[i])){};
    // how to structure the Polynomial
    printf("p1: ");
    PP(p1,str1);//print polynomial
    printf("p2: ");
    PP(p2,str2);
    // calculator
    if(p1<=p2) PC(p1,str1,p2,str2,1);
    else if(p1>p2) PC(p2,str2,p1,str1,2);
    return 0;
}
