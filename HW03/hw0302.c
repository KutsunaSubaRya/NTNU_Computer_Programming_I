#include<stdio.h>
#include<stdint.h>
#define int int32_t
signed main()
{
    char a;
    int str[1005],i=0;
    printf("Please enter a natural number : ");
    while(1)
    {
        a=getchar();
        if(a=='-')
            return printf("Invalid input!\n"),0;
        if(a=='\n' || a== EOF)
            break;
        str[i++]=a-48;
    }
    int tmp;
    tmp=str[0];
    str[0]=str[i-1];
    str[i-1]=tmp;
    for(int j=0;j<i;j++)
        printf("%d",str[j]);
    return 0;
}
