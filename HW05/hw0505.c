#include<stdio.h>
#include<stdint.h>
#include<time.h>
#include<stdlib.h>
#include "PM.h" //Print current Map
#include "Op.h"
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
    if(w<10 || w>16) return printf("Invalid Input\n"),0;
    printf("Please enter the height      (10-16): ");
    if(scanf("%d",&h)){};
    if(h<10 || h>16) return printf("Invalid Input\n"),0;
    printf("Please enter the mine number (30-90): ");
    if(scanf("%d",&mine_num)){};
    if(mine_num<30 || mine_num>90) return printf("Invalid Input\n"),0;
    int t=mine_num;
    PM(w,h,mine_map);
    int tot=h*w;
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
    //PM(w,h,chk);
    int FG=0;//count right flag
    int efg=0;//every flag
    while(1)
    {
        printf("Your Option (1:Open, 2: Flag): ");
        int opt,a,b;
        if(scanf("%d",&opt)){};
        if(opt==1)
        {
            printf("Position (row,column): ");
            while(scanf("%d %d",&a,&b) && (a>h-1 || a<0 || b>w-1 || b<0))
                printf("Wrong Input.\nPosition (row,column): ");
            if(chk[a][b]=='B')
            {
                printf("Boom!\n");
                BOOM(w,h,mine_map,chk);
                break;
            }
            tot=Op(mine_map,chk,a,b,h,w,tot);
            if(tot==mine_num)
            {
                printf("Congratulation!\n");
                break;
            }
            PM(w,h,mine_map);
        }
        else if(opt==2)
        {
            printf("Position (row,column): ");
            while(scanf("%d %d",&a,&b) && (a>h-1 || a<0 || b>w-1 || b<0))
                printf("Wrong Input.\nPosition (row,column): ");
            if(mine_map[a][b]=='F') 
            {
                mine_map[a][b]='*';
                efg--;
                if(chk[a][b]=='B') FG--;
            }
            else 
            {
                efg++;
                mine_map[a][b]='F';
                if(chk[a][b]=='B') FG++;
            }

            if(FG==mine_num && efg==mine_num)
            {
                printf("Congratulation!\n");
                break;
            }
            PM(w,h,mine_map);
        }
    }  
    return 0;
}
