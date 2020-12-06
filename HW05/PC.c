#include<stdio.h>
#include<stdint.h>
#include "PP.h"
#define int int32_t
void PC(int p1, int str1[], int p2, int str2[], int deter)
//deter=2 swap(p1,p2)
{
    // Plus
    int Plus[p2+1];
    for(int i=0;i<p2-p1;i++) Plus[i]=str2[i];
    for(int i=p2-p1,j=0;i<p2 && j<p1;i++,j++) Plus[i]=str1[j]+str2[i];
    printf("p1 + p2: ");
    PP(p2,Plus);
    // Minus
    printf("p1 - p2: ");
    if(deter==1)
    {
        int Minus[p2+1];
        for(int i=0;i<p2-p1;i++) Minus[i]=0-str2[i];
        for(int i=p2-p1,j=0;i<p2 && j<p1;i++,j++) Minus[i]=str1[j]-str2[i];
        PP(p2,Minus);
    }
    else if(deter==2)
    {
        int Minus[p2+1];
        for(int i=0;i<p2-p1;i++) Minus[i]=str2[i];
        for(int i=p2-p1,j=0;i<p2 && j<p1;i++,j++) Minus[i]=str2[i]-str1[j];
        PP(p2,Minus);
    }
    // Multiply
    printf("p1 * p2: ");
    int Mul[p1+p2+1];
    for(int i=0;i<p1+p2+2;i++) Mul[i]=0;
    for(int i=0;i<p1;i++)
        for(int j=0;j<p2;j++)
            Mul[i+j]+=str1[i]*str2[j]; 
    // i+j=(p1+p2-2)-((p1-i-1)+(p2-j-1))
    PP(p1+p2-1,Mul);
}
