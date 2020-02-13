//题目：输入三个整数x,y,z，请把这三个数由小到大输出。
//
//程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
#include <stdio.h>

int main()
{
    int x,y,z,t;
    printf("\nPlease input three variables:\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y) { /*交换x,y的值*/
        t=x;x=y;y=t;
    }
    if(x>z) { /*交换x,z的值*/
        t=z;z=x;x=t;
    }
    if(y>z) { /*交换z,y的值*/
        t=y;y=z;z=t;
    }
    printf("from little to large: %d %d %d\n",x,y,z);
}


//#include <stdio.h>
//int main() {
//    int a,b,c;
//
//    //输入三个数
//    printf_s("Please input three variables\n");
//    scanf("%d %d %d",&a,&b,&c);
//
//    if ( a > b ) {
//        if ( b > c ) {
//            printf("%d > %d > %d",a,b,c);
//        } else {
//            if ( a > c ) {
//                printf("%d > %d > %d", a,c,b);
//            } else {
//                printf("%d > %d > %d", c,a,b);
//            }
//        }
//    }
//    return  0;
//}