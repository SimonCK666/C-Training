/**
* sum_arrl.c
* @author bulbasaur
* @description 
* @created 2020-03-23T21:01:03.760Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-23T21:09:34.003Z+08:00
*/

// 使用 sum()函数。该程序打印原始数组的大小和表示该数组的函数形参的大小
//（如果你的编译器不支持用转换说明%zd打印sizeof返回值，可以用%u或%lu来代替）

#include <stdio.h>

#define SIZE 10

int sum(int *ar, int n);

int main(void) {
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 10, 25, 31, 20};
    long answer;
    
    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);

    return 0;
}


int sum(int *ar, int n) {
    int i;
    int total = 0;
    
    for (i = 0; i < n; i++)
    {
        /* code */
        total += ar[i];
    }
    
    printf("The size of ar is %zd bytes.\n", sizeof ar);

    return total;
    
}

/*
注意，marbles的大小是40字节。这没问题，因为marbles内含10个int类
型的值，每个值占4字节，所以整个marbles的大小是40字节。但是，ar才8字
节。这是因为ar并不是数组本身，它是一个指向 marbles 数组首元素的指
针。我们的系统中用 8 字节储存地址，所以指针变量的大小是 8字节（其他
系统中地址的大小可能不是8字节）。简而言之，在程序清单10.10中，
marbles是一个数组， ar是一个指向marbles数组首元素的指针，利用C中数组
和指针的特殊关系，可以用数组表示法来表示指针ar。
*/