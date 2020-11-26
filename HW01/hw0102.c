#include<stdio.h>
#include<stdint.h>
#define int int32_t
int itop(int a)
{
    int i,ans=1,tmp,di=10000;
    for(i=0;i<5;i++,di/=10)
    {
        tmp=a/di;
        ans*=tmp;
        a%=di;
    }
    return ans;
}
int main()
{
    int num,c;
    printf("Please enter a 5-digits integer: ");
    while(scanf("%d",&num)!=1 || num/10000<=0 || num/10000>=10)
    {
        printf("Please input correct format!\n");
        printf("Please enter a 5-digits integer: ");
        while((c=getchar()!='\n') && c!=EOF); //while(getchar()!='\n');
    }
    printf("Result: %d\n",itop(num));
    return 0;
}
