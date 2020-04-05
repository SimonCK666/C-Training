/**
* day_mon3.c
* @author bulbasaur
* @description 
* @created 2020-03-23T20:44:33.527Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-23T20:49:03.166Z+08:00
*/

#include <stdio.h>

#define MONTHS 12

int main() {
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    
    for (index = 0; index < MONTHS; index++)
    {
        /* code */
        printf("Month %2d has %d days.\n", index + 1, *(days + index));   // 与days[index]相同
    }
    
    return 0;
}

/*
days是数组首元素的地址，days + index是元素days[index]的地
址，而*(days + index)则是该元素的值，相当于days[index]。for循环依次引用
数组中的每个元素，并打印各元素的内容。
*/