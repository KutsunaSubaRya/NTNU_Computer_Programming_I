#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#define int int32_t
int deter(int a, int b, int c, int d, int e)
{
    int str[6],sap,sbp,scp,sdp,sep,fap,fbp,fcp,fdp,fep;
    str[0]=a%13;str[1]=b%13;str[2]=c%13;str[3]=d%13;str[4]=e%13;
    
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(str[i]>str[j])
            {
                int tmp=str[i];
                str[i]=str[j];
                str[j]=tmp;
            }
        }
    }
    sap=str[0]%13;sbp=str[1]%13;scp=str[2]%13;sdp=str[3]%13;sep=str[4]%13;
    
    fap=a/13;fbp=b/13;fcp=c/13;fdp=d/13;fep=e/13;

    if(a/13==b/13 && b/13==c/13 && c/13==d/13 && d/13==e/13 && str[0]==str[1]-1 && str[1]==str[2]-1 && str[2]==str[3]-1 && str[3]==str[4]-1)
        return 1;
    else if((sap==sbp && sbp==scp && scp==sdp) || (sbp==scp && scp==sdp && sdp==sep))
        return 2;
    else if((sap==sbp && sbp==scp && sdp==sep) || (sap==sbp && scp==sdp && sdp==sep))
        return 3;
    else if(fap==fbp && fbp==fcp && fcp==fdp && fdp==fep)
        return 4;
    else if(sap==sbp-1 && sbp==scp-1 && scp==sdp-1 && sdp==sep-1)
        return 5;
    else if((sap==sbp && sbp==scp && sdp!=sep) || (sbp==scp && scp==sdp && sap!=sep) || (sap!=sbp && scp==sdp && sdp==sep))
        return 6;
    else if((sap==sbp && scp==sdp && sap!=sep && scp!=sep) || (sap==sbp && sdp==sep && sap!=scp && sdp!=scp) || (sbp==scp && sdp==sep && sbp!=sap && sdp!=sap))
        return 7;
    else if((sap==sbp && scp!=sdp && sdp!=sep && scp!=sep) || (sbp==scp && sap!=sdp && sap!=sep && sdp!=sep) || (sap!=sbp && sap!=sep && sbp!=sep && scp==sdp) || (sap!=sbp && sbp!=scp && scp!=sap && sdp==sep))
        return 8;
    else 
        return 9;
}
signed main()
{
    int a,b,c,d,e,cou[55],re=0;
    printf("Please enter 5 cards: ");
    if(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)){};
    if((a<=0 || a>=53) || (b<=0 || b>=53) || (c<=0 || c>=53) || (d<=0 || d>=53) || (e<=0 || e>=53)) return printf("Input Error!\n"),0;
    int st[6];st[0]=a;st[1]=b;st[2]=c;st[3]=d;st[4]=e;
    for(int i=0;i<53;i++) cou[i]=0;
    for(int i=0;i<5;i++) cou[st[i]]++;
    for(int i=0;i<53;i++) if(cou[i]>1) re=1;
    if(re) return printf("Invalid cards!\n"),0;
    int det=deter(a,b,c,d,e);
    if(det==1) printf("Straight Flush\n");
    else if(det==2) printf("Four of a kind\n");
    else if(det==3) printf("Full house\n");
    else if(det==4) printf("Flush\n");
    else if(det==5) printf("Straight\n");
    else if(det==6) printf("Three of a kind\n");
    else if(det==7) printf("Two pair\n");
    else if(det==8) printf("One pair\n");
    else if(det==9) printf("High card\n"); 
    return 0;
}
