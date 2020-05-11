/**
* devide.c
* @author bulbasaur
* @description 
* @created 2020-04-28T09:58:08.093Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-28T10:07:29.903Z+08:00
*/

/*
- 函数返回运算的状态，结果通过指针返回
- 常用的套路是让函数返回特殊的不属于有小范围内的值来表示出错
    - 1 or 0
- 当任何数值都是有效的可能结果时，就需要分开返回
*/

#include <stdio.h>

/* 
    @return 如果除法成功， 返回 1， 否则返回 0
*/
int divide(int a, int b, float *result);

int main(void) {
    int a = 6, b = 2;
    
    float c;
    if (divide(a, b, &c) == 1)
    {
        printf("%d / %d = %f\n", a, b, c);
    }
    
    return 0;
}


int divide(int a, int b, float *result) {
    int ret = 1;
    
    if (b == 0)
    {
        ret = 0;
    } else
    {
        *result = a / b;
    }
    
    return ret;
}