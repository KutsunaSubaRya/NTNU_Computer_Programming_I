#include<stdio.h>
#include<stdint.h>
#include "test.h"
#include "sort.h"
#define int int32_t
signed main()
{
    printf("Before:\n");
    for(int i=0;i<array_size;i++) printf("%d ",array[i]);
    printf("\nAfter:\n");
    Sort(array,array_size);
    return 0;
}
