/**
* pnt_add.c
* @author bulbasaur
* @description 
* @created 2020-03-23T20:22:22.707Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-23T20:37:33.583Z+08:00
*/

//（转换说明%p通常以十六进制显示指针的值）

//指针地址
#include <stdio.h>

#define SIZE 4

int main() {
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;

    // 将数组的地址赋给指针
    pti = dates;
    ptf = bills;
    
// %m.ns 输出占m列，但只取字符串中左端n个字符。这n个字符输出在m列的右侧，左补空格。
    printf("%23s  %15s\n", "short", "double");

    for (index = 0; index < SIZE; index++)
    {
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    }

    return 0;
}