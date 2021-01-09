#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#define i32 int32_t
#define i64 int64_t
/*typedef union
{
    uint64_t l;
    unsigned char p[8];
} LE;*/
signed main()
{
    i64 n=0;
    //LE arr;
    printf("Please input an integer: ");
    if(scanf("%ld",&n)){};
    printf("The integer: %ld\n",n);
    uint8_t *a= (uint8_t *) &n;
    for(size_t i=0;i<8;i++)
        printf("(%zu) 0x%02x ",i+1,*(a+i));
    /*arr.l=n;
    for(int i=0;i<8;i++)
        printf("(%d) 0x%02x ",i+1,arr.p[i]);*/
    while(1)
    {
        i32 ch,num;
        printf("Please enter the position (1-8, 0: End): ");
        while(scanf("%d",&ch) && (ch>8 || ch<0) )
            printf("Invalid input.\nPlease enter the position (1-8, 0: End): ");
        if(ch==0) break;
        printf("Please enter the new value (0~255): ");
        while(scanf("%d",&num) && (num>255 || num<0) )
            printf("Invalid input.\nPlease enter the new value (0~255): "); 
        printf("The integer: %ld\n",n);
        *(a+ch-1)=num;
        a=(uint8_t*) &n;
        for(size_t i=0;i<8;i++) 
            printf("(%zu) 0x%02x ",i+1,*(a+i));
    }
    return 0;
}
