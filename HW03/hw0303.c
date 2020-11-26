#include<stdio.h>
#include<stdint.h>
#define int int32_t
int deter=0;
void St(void);
void S1(void);
void S2(void);
void S3(void);
void S4(void);
void S5(void);
void S6(void);
void St(void)
{
    int a;
    printf("Start\n");
    while(1)
    {
        printf("Please enter an integer: ");
        if(scanf("%d",&a)){};
        if(a==10 || a==35)
        {
            S1();
            break;
        }
        else if(a==11)
        {
            S3();
            break;
        }
        else if(a==20 || a==78)
        {
            S5();
            break;
        }
        else 
        {
            printf("Start\n");
            continue;
        }
    }
}
void S1(void)
{
    int a;
    printf("S1\n");
    while(1)
    {
        printf("Please enter an integer: ");
        if(scanf("%d",&a)){};
        if(a==19)
        {
            S2();
            break;
        }
        else if(a==12 || a==36)
        {
            S6();
            break;
        }
        else
        {
            printf("S1\n");
            continue;
        }
    }
}
void S2(void)
{
    int a;
    printf("S2\n");
    while(1)
    {
        printf("Please enter an integer: ");
        if(scanf("%d",&a)){};
        if(a==43)
        {
            printf("S2\n");
            continue;
        }
        else if(a==99) break;
        else 
        {
            St();
            break;
        }
    }
}
void S3(void)
{
    int a;
    printf("S3\n");
    printf("Please enter an integer: ");
    if(scanf("%d",&a)){};
    S4();
}
void S4(void)
{
    int a;
    printf("S4\n");
    printf("Please enter an integer: ");
    if(scanf("%d",&a)){};
    S6();
}
void S5(void)
{
    int a;
    printf("S5\n");
    while(1)
    {
        printf("Please enter an integer: ");
        if(scanf("%d",&a)){};
        if(a==1)
        {
            S4();
            break;
        }
        else if(a==2)
        {
            S6();
            break;
        }
        else
        {
            St();
            break;
        }
    }
}
void S6(void)
{
    int a;
    printf("S6\n");
    while(1)
    {
        printf("Please enter an integer: ");
        if(scanf("%d",&a)){};
        if(a==108) break;
        else
        {
            S5();
            break;
        }
    }
}
signed main()
{
    St();
    printf("Final");
    return 0;
}
