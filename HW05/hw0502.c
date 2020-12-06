#include<stdio.h>
#include<stdint.h>
#include "det4.h"
#include "test2.h"
#define int int32_t
signed main()
{
    printf("The matrix is\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++) printf("%d ",matrix[i][j]);
        printf("\n");
    }
    det4(matrix);
    return 0;
}
