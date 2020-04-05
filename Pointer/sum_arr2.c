/**
* sum_arr2.c
* @author bulbasaur
* @description 
* @created 2020-03-23T21:10:35.904Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-23T21:19:08.308Z+08:00
*/

// sum()函数使用一个指针形参标识数组的开始，用一个整数形参表明待处理数组的元素个数（指针
// 形参也表明了数组中的数据类型）。但是这并不是给函数传递必备信息的唯一方法。
// 还有一种方法是传递两个指针，第1个指针指明数组的开始处与前面用法相同），第2个指针指明数组的结束处。


// 该程序也表明了指针形参是变量，这意味着可以用索引表明访问数组中的哪一个元素。

#include <stdio.h>

#define SIZE 10
int sump(int *start, int *end);
int main() {
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 10, 25, 31, 20};
    long answer;
    
    answer = sump(marbles, marbles + SIZE);

    printf("The total number of marbles is %ld.\n", answer);
    
    return 0;
}

int sump(int *start, int *end) {
    int total = 0;
    while (start < end)
    {
        /* 把数组元素的值加起来 */
        total += *start;
        // 让指针指向下一个元素
        start++;
    }
    
    return total;
}