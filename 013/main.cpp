//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
#include <stdio.h>
int main() {
    float h,s;
    h = s = 100;
    //第一次下落的高度
    h = h / 2;
    for (int i = 2; i <= 10; i++) {
        s = s + 2 * h;
        h = h / 2;
    }
    printf("When it fallen down for tenth times, the total road is %f m, the last fallen up is %f m.");

    return 0;
}


//official
//#include<stdio.h>
//int main()
//{
//    float h,s;
//    h=s=100;
//    h=h/2; //第一次反弹高度
//    for(int i=2;i<=10;i++)
//    {
//        s=s+2*h;
//        h=h/2;
//    }
//    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n",s,h);
//    return 0;
//}