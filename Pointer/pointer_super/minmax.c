/**
* minmax.c
* @author bulbasaur
* @description 
* @created 2020-04-28T09:50:41.898Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-28T10:33:56.985Z+08:00
*/

#include <stdio.h>

void minmax(int *a, int len, int *min, int *max);

int main(void) {
    int a[] = {1,2,3,4,5,6,7,8,23,55};
    int min, max;
    
    // sizeof(a) / sizeof(a[0]) = len
    minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
    printf("min = %d, max = %d\n", min, max);
    return 0;
}

// 需要返回多个变量，用指针返回
void minmax(int a[], int len, int *min, int *max) {
    int i;
    *min = *max = a[0];
    
    for (i = 0; i < len; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
        if (a[i] > *max)
        {
            *max = a[i];
        }
        
        
    }
    
}