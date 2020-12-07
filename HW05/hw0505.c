#include<stdio.h>
#include<stdint.h>
#include<time.h>
#include<stdlib.h>
#include "PM.h" //Print current Map
#define int int32_t
char mine_map[20][20];char chk[20][20];
void init(void)
{
    for(int i=0;i<20;i++) for(int j=0;j<20;j++) 
    {
        mine_map[i][j]='*';
        chk[i][j]='*';
    }
}
signed main()
{
    int mine_num,w,h,x,y;
    init();
    printf("Please enter the width       (10-16): ");
    if(scanf("%d",&w)){};
    printf("Please enter the height      (10-16): ");
    if(scanf("%d",&h)){};
    printf("Please enter the mine number (10-16): ");
    if(scanf("%d",&mine_num)){};
    int t=mine_num;
    PM(w,h,mine_map);
    //random mine in mine_map
    srand(time(NULL));
    while(t)
    {
        x=rand()%w;
        y=rand()%h;
        if(chk[y][x]!='B') 
        {
            chk[y][x]='B';
            t--;
        }
    }
    //
    int FG=0;//count right flag
    while(FG!=mine_num)
    {
        printf("Your Option (1:Open, 2: Flag): ");
        int opt,a,b;
        if(scanf("%d",&opt)){};
        if(opt==1)
        {
            printf("Position (row,column): ");
            
        }
        else if(opt==2)
        {
            printf("Position (row,column): ");
            while(scanf("%d %d",&a,&b))
            {
                if(a>=h || a<0 || b>w || b<0) continue;
                else break;
                printf("Wrong Input.\nPosition (row,column): ");
            }
            mine_map[a][b]='F';
            if(chk[a][b]=='B') FG++;
        
        }
    }  
    return 0;
}
