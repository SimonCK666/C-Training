//题目：求1+2!+3!+...+20!的和。
//
//程序分析：此程序只是把累加变成了累乘。
#include <stdio.h>
int main() {
    long double a = 1, sum = 1, result = 0;

    for (int i = 1; i <= 20; i++) {
        sum = sum * a;
        a++;
        result = result + sum;
    }

    printf("1+2!+3!+...+20! = %LF",result);

    return 0;
}