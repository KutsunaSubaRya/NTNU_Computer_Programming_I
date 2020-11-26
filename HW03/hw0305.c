#include<stdio.h>
#include<stdint.h>
#include<float.h>
#define int int32_t
double AP,a,b,c,e,d,IFO,MIPF,YoP,age,IR;
signed main()
{ 
    double IF[6]={60,30,30,15,15};
    printf("SIP Plan\nAnnually payment: ");
    if(scanf("%lf",&AP)){};
    if(AP<0) return printf("Input Error!\n"),0;
    printf("Insurance fee in the first five years (0 is assumed afterwards): ");
    if(scanf("%lf,%lf,%lf,%lf,%lf",&a,&b,&c,&d,&e)){};
    if(!(a>=b && b>=c && c>=d && d>=e && a>0 && b>0 && c>0 && d>0 && e>0)) return printf("Input Error!\n"),0;
    printf("Insurance fee off: ");
    if(scanf("%lf",&IFO)){};
    if(IFO<0) return printf("Input Error!\n"),0;
    printf("Monthly insurance processing fee: ");
    if(scanf("%lf",&MIPF)){};
    if(MIPF<0) return printf("Input Error!\n"),0;
    printf("Age: ");
    if(scanf("%lf",&age)){};
    if(age<0 || age>100) return printf("Input Error!\n"),0;
    int age2=(int)age;
    printf("How many years of payment: ");
    if(scanf("%lf",&YoP)){};
    if(100-age<YoP || YoP<0) return printf("Input Error!\n"),0;
    printf("Expected annual return on investment rate: ");
    if(scanf("%lf",&IR)){};
    if(IR<0) return printf("Input Error!\n"),0;
    double Y_IR=IR/(double)12;
    int tmp=(int)((Y_IR*1000)+0.5);
    Y_IR=(double)tmp/(double)1000;
    printf("------------------------------\nYour Payment and Account Value Table\n");
    double tot=0,pay=0;
    for(int i=age;i<=100;i++)
    {
        if(i-age2>=YoP)
        {
            tot+=0;
            pay+=0;
        }
        else if(i<=20 && i-age2<=5)
        {
            pay+=AP;
            tot+=AP*(100-IF[i-age2]+IFO)/100-2000;
        }
        else if(i<=20 && i-age2>5)
        {
            pay+=AP;
            tot+=AP*(100+IFO)/100-2000;
        }
        else if(i>20 && i-age2<=5)
        {
            pay+=AP;
            tot+=AP*(100-IF[i-age2]+IFO)/100-100*(i-20)-2000;
        }
        else if(i>20 && i-age2>5)
        {
            pay+=AP;
            tot+=AP*(100+IFO)/100-100*(i-20)-2000;
        }
        for(int j=0;j<12;j++)
        {
            if(i==age2 && j==0) continue;
            tot-=MIPF;
            tot+=tot*Y_IR/100;
        }
        printf("%d: %d, %lf\n",i,(int)pay,tot);
    }
    return 0;
}
