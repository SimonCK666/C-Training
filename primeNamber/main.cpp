//题目：判断101到200之间的素数。
//
//程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。
#include <stdio.h>
int judgePrime (int num);
int main() {
    //解决问题
    int i,j;
    int count=0;

    for (i=101; i<=200; i++) {
        for (j = 2; j < i; j++) {
            // 如果i能被j整除再跳出循环
            if (i % j == 0)
                break;
        }
        // 判断循环是否提前跳出，如果j<i说明在2~j之间,i有可整出的数
        if (j >= i) {
            count++;
            printf("%d ", i);

            // 换行，用count计数，每五个数换行
            if (count % 5 == 0)
                printf("\n");
        }
    }

    printf("\nThe number of the prime numbers are %d\n",count);


    //判断是否为素数
    int b = 13;

    judgePrime(b);

    return 0;
}

int judgePrime (int num) {
    int a;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            a = 0;
        } else {
            a = 1;
        }
    }

    if (a == 1) {
        printf("\nit is a prime number\n");
    } else {
        printf("\nit is not a prime number\n");
    }

    return a;
}
