/**
* 019.c
* @author bulbasaur
* @description 
题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

程序分析：学会分解出每一位数，如下解释。
* @created 2020-03-14T18:18:03.070Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-14T19:55:46.945Z+08:00
*/

#include <stdio.h>
int digit(int num);
int reverse(int num);
int main() {
    int input,digits, result;
    printf("Please input an integer: ");
    scanf("%d", &input);

    /* Judge the digits of the input */
    digits = digit(input);
    printf("The input's digits is %d\n", digits);
    
    /* Test */
    printf("Input: %d\n", input);
    
    result = reverse(input);
    printf("Reverse order: %d\n", result);
    
    return 0;
}

int digit(int num) {
    int count = 0;
    
    while (num != 0)
    {
        /* code */
        num /= 10;
        count ++;
    }
    
    return count;
}

int reverse(int num) {
    int rev = 0;
    
    /* Reverse number */
    while (num != 0)
    {
        /* code */
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    
    return rev;
}