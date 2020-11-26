#include<stdio.h>
#include<stdint.h>
#define int int32_t
//((y%4==0 && y%100!=0) || y%400==0)//閏年
const int mon_d[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int tot_day(int y, int m, int d)
{
    int sum=0;
    if(((y%4==0 && y%100!=0) || y%400==0)) sum+=1;
    for(int i=1;i<y;i++)
    {
        if((i%4==0 && i%100!=0) || i%400==0) sum+=366;
        else sum+=365;
    }
    for(int i=1;i<m;i++) sum+=mon_d[i];
    sum+=d;
    return sum;
}
signed main()
{
    int y1,y2,m1,m2,d1,d2,dur,sum1=0,sum2=0;
    printf("Date Format: YYYY/MM/DD\nStart Date: ");
    if(scanf("%d/%d/%d",&y1,&m1,&d1)){};
    if(y1<1 || m1>12 || m1<1 || d1<1 || d1>31) return printf("Invalid date!\n"),0;
    else if((m1==4 || m1==6 || m1==9 || m1==11) && d1>30) return printf("Invalid date\n"),0;
    else if(((y1%4==0 && y1%100!=0) || y1%400==0) && d1>29) return printf("Invalid date\n"),0;
    else if((!((y1%4==0 && y1%100!=0) || y1%400==0)) && d1>28) return printf("Invalid date\n"),0;
    printf("End   Date: ");
    if(scanf("%d/%d/%d",&y2,&m2,&d2)){};
    if(y2<1 || m2>12 || m2<1 || d2<1 || d2>31) return printf("Invalid date!\n"),0;
    else if((m2==4 || m2==6 || m2==9 || m2==11) && d2>30) return printf("Invalid date\n"),0;
    else if(((y2%4==0 && y2%100!=0) || y2%400==0) && d2>29) return printf("Invalid date\n"),0;
    else if((!((y2%4==0 && y2%100!=0) || y2%400==0)) && d2>28) return printf("Invalid date\n"),0;
    sum1=tot_day(y1,m1,d1);
    sum2=tot_day(y2,m2,d2);
    if(sum1>sum2) return printf("Input Error!\n"),0;
    dur=sum2-sum1;
    printf("Duration: %d Day(s)\n",dur);
    return 0;
}
