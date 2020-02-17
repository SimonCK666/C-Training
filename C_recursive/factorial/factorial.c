// 递归：在函数的定义中使用函数自身的方法

// Grammar format：
// void recursion ()
// {
//     statements;
//     ... ... ...
//     recursion();  函数自身调用自身
//     。。。 。。。 。。。
// }

// int main() {
//     recursion();
// }


#include <stdio.h>

double factorial(unsigned int i)
{
    if (i <= 1) {
        return 1;
    }
    return i * factorial(i - 1);
}

int main() {
    int i = 15;
    printf("%d 的阶乘为：%f\n",i,factorial(i));

    return 0;
}