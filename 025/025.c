/**
* 025.c
* @author bulbasaur
* @description 
题目：求100之内的素数。

程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
* @created 2020-03-27T17:19:51.309Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-27T18:20:41.784Z+08:00
*/

#include <stdio.h>
int main() {
    int num, flag;
    printf("Please input an integer:");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        /* code */
        printf("False\n");
    } else if (num == 2)
    {
        /* code */
        printf("Ture\n");
    }

    for (int i = 2; i < num; i++)
    {
        /* code */
        if (num % i == 0)
        {
            /* code */
            flag = 0;
        } else
        {
            /* code */
            flag = 1;
        }
    }

    if (flag == 0)
    {
        /* code */
        printf("False\n");
    } else
    {
        /* code */
        printf("Ture\n");
    }
    
    
    
    
    return 0;
}