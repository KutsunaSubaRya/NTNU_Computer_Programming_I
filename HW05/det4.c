#include<stdio.h>
#include<stdint.h>
#define int int32_t
void det4(int (*str)[4])
{
    int a=str[0][0],b=str[0][1],c=str[0][2],d=str[0][3];
    int e=str[1][0],f=str[1][1],g=str[1][2],h=str[1][3];
    int i=str[2][0],j=str[2][1],k=str[2][2],l=str[2][3];
    int m=str[3][0],n=str[3][1],o=str[3][2],p=str[3][3];
    int one=a*(f*(k*p-l*o)-g*(j*p-l*n)+h*(j*o-k*n));
    int two=b*(e*(k*p-l*o)-g*(i*p-l*m)+h*(i*o-k*m));
    int thr=c*(e*(j*p-l*n)-f*(i*p-l*m)+h*(i*n-j*m));
    int fou=d*(e*(j*o-k*n)-f*(i*o-k*m)+g*(i*n-j*m));
    int tot=one-two+thr-fou;
    printf("The determinant is %d.\n",tot);
}
