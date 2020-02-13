//
//题目：输入某年某月某日，判断这一天是这一年的第几天？
//
//程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
#include <stdio.h>
int main() {
    int year,day,month,sum,leap,result;

    //输入年月
    printf_s("Please input the date\n");
    scanf("%d %d %d",&year,&day,&month);

    switch (month)  //以月份以前的总天数
    {
        case 1:
            sum = 0;
            break;
        case 2:
            sum = 31;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
        default:printf_s("data error");
            break;
    }
    result = sum + day;
    //判断闰年
    if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        leap = 1;
    } else {
        leap = 0;
    }

    if ( leap == 1 ) {
        result++;
    }

    printf("This is the %d day in this year\n", result);
    printf_s("\n");
    return 0;
}