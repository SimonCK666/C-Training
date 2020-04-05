/**
* 023.c
* @author bulbasaur
* @description 
题目：判断一个数字是否为质数。

程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
* @created 2020-03-23T19:43:36.332Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-23T19:59:15.923Z+08:00
*/

#include <stdio.h>
int isPrimeNaive(int n);
int main() {
    int n;
    printf("Please input an integer: ");
    scanf("%d", &n);

    if(isPrimeNaive(n) == 1) {
        printf("%d is a prime number.\n", n);
    } else
    {
        printf("%d is not a prime number.\n", n);
    }
    
    
    return 0;
}

int isPrimeNaive(int n) {
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}
