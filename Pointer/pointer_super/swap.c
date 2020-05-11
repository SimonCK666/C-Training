/**
* swap.c
* @author bulbasaur
* @description 
* @created 2020-04-28T09:46:17.811Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-28T09:48:40.537Z+08:00
*/

/* 交换两个变量 */

#include <stdio.h>

void swap(int *pa, int *pb);

int main(void) {
    int a = 5, b = 6;
    
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
}