/**
* 018.c
* @author bulbasaur
* @description 
有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？

程序分析：利用递归的方法，递归分为回推和递推两个阶段。要想知道第五个人岁数，需知道第四人的岁数，依次类推，推到第一人（10岁），再往回推。。
* @created 2020-03-14T18:04:42.593Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-14T18:17:07.781Z+08:00
*/

#include <stdio.h>

int age(n)
int n;
{
    int c;
    if (n == 1)
    {
        /* code */
        c = 10;
    } else
    {
        /* code */
        c = age(n - 1) + 2;
    }
    
    return(c);
}

int main() {
    
    printf("The fifth person's age is %d\n", age(5));
    
    return 0;
}