/**
* selectSort.c
* @author bulbasaur
* @description 
* @created 2020-03-28T09:58:29.210Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-28T11:29:10.100Z+08:00
*/

// 题目：对10个数进行排序。

// 程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换


#include <stdio.h>
#define count 10
int main() {
    int i, j, temp, num[count];
    printf("Please input the array one by one:");
    for (i = 0; i < count; i++)
    {
        /* code */
        scanf("%d", &num[i]);
    }

    for (i = 0; i < count - 1; i++)
    {
        /* code */
        int min = i;
        for (j = i + 1; j < count; j++)
        {
            /* code */
            if (num[min] > num[j])
            {
                /* code */
                min = j;
            }
            
        }
        
        if (min != i)
        {
            /* code */
            temp = num[min];
            num[min] = num[i];
            num[i] = temp;
        }
        
    }

    printf("The sort is: \n");
    for (i = 0; i < count; i++)
    {
        /* code */
        printf("%d\t", num[i]);
    }
    
    printf("\n");
    
    return 0;
}