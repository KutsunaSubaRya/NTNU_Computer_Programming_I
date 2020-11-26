#include<stdio.h>
#include<stdint.h>
#define int int32_t
int main()
{
    float g,c,s;
    printf("Please enter the acceleration due to gravity: ");
    while(scanf("%f",&g)!=1)
    {
        printf("Please input one number!\n");
        printf("Please enter the acceleration due to gravity: ");
        while((c=getchar()!='\n') && c!=EOF);//while(getchar()!='\n');
    }
    printf("Please enter the time (s): ");
    while(scanf("%f",&s)!=1)
    {
        printf("Please input one number!\n");
        printf("Please enter the time (s): ");
        while((c=getchar()!='\n') && c!=EOF);//while(getchar()!='\n');
    }
    printf("Final velocity: %.2f m/s\nThe altitude: %.3f m\n",g*s,(g*s*g*s)/(2*g));    
    return 0;
}
