#include<stdio.h>
#include<stdint.h>
#include "BAC.h"
#define NONECOLOR "\033[m"
#define RED "\033[0;32;31m"
#define LIGHT_RED "\033[1;31m"
#define GREEN "\033[0;32;32m"
#define LIGHT_GREEN "\033[1;32m"
#define BLUE "\033[0;32;34m"
#define LIGHT_BLUE "\033[1;34m"
#define DARY_GRAY "\033[1;30m"
#define CYAN "\033[0;36m"
#define LIGHT_CYAN "\033[1;36m"
#define PURPLE "\033[0;35m"
#define LIGHT_PURPLE "\033[1;35m"
#define BROWN "\033[0;33m"
#define YELLOW "\033[1;33m"
#define LIGHT_GRAY "\033[0;37m"
#define WHITE "\033[1;37m"
signed main()
{
    int gn,f=1,goa,bo=0;
    printf(BLUE"Bulls and Cows Game\n");
    printf(WHITE);
    goa=generate_number();
    //printf("goa=%d",goa);
    while(1)
    {
        bo=0;
        printf("Round %d >>>\n    Your Guess: ",f++);
        if(scanf("%d",&gn)){};
        if(deter(gn))
        {
            printf(RED"Response: Invalid Guess\n");
            printf(WHITE);
            continue;
        }
        bo=BAC(gn,goa);
        if(bo)
        {
            printf(LIGHT_GREEN"Response: Bingo! Congratulations.\n");
            printf(WHITE);
            break;
        }
    }
    return 0;
}
