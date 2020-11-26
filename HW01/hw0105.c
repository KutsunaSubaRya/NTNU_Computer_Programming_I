#include<stdio.h>
#include<stdint.h>
#define int int32_t
int main()
{
    int num,c;
    printf("Please enter an integer: ");
    while(scanf("%d",&num)!=1)
    {
        printf("Please input correct format!\n");
        printf("Please enter an integer: ");
        while((c=getchar()!='\n') && c!=EOF);//while(getchar()!='\n');
    }
    printf("%d: %08x",num,num);
    return 0;
}
