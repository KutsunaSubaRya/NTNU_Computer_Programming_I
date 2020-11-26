#include<stdio.h>
#include<stdint.h>
#define int int32_t
int ptr[1050000],disk[1050000];
signed main() 
{
    int n, i, j, k;
    printf("Please enter the disk number (2~20): ");
    if(scanf("%d", &n)) {};
    if(n<2 || n>20) return printf("Invalid Input!\n"),0;
    disk[0] = 1, ptr[0] = 1;
    int len = 1;
    int pos[6] = {1, 0, 4, 5, 2, 3};
    // 0:1->3, 1:1->2, 2:3->1, 3:3->2, 4:2->1, 5:2->3
    int neg[6] = {3, 2, 5, 4, 0, 1};
    for(i = 2; i <= n; i++) 
    {
        disk[len] = i, ptr[len] = 1;
        for(j = 0; j < len; j++) 
        {
            disk[j + len + 1] = disk[j]; //palindrome
            ptr[j] = pos[ptr[j]];
            //printf("%d ",ni[j]);
        }   //printf("j=%d %d \n",j,ac[j]);
        len = len * 2 + 1;
        for(k = 0, j++; j < len; j++, k++) ptr[j] = neg[ptr[k]]; //printf("j=%d %d \n",j,ac[j]);
    }
    for(i = 0; i < len; i++) 
    {
        if(ptr[i] == 0)
            printf("move disk %d to rod 3\n", disk[i]);
        else if(ptr[i] == 1)
            printf("move disk %d to rod 2\n", disk[i]);
        else if(ptr[i] == 2)
            printf("move disk %d to rod 1\n", disk[i]);
        else if(ptr[i] == 3)
            printf("move disk %d to rod 2\n", disk[i]);
        else if(ptr[i] == 4)
            printf("move disk %d to rod 1\n", disk[i]);
        else if(ptr[i] == 5)
            printf("move disk %d to rod 3\n", disk[i]);
    }
    return 0;
}
