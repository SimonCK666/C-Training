/**
* 020.c
* @author bulbasaur
* @description 
题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

程序分析：学会分解出每一位数。
* @created 2020-03-14T19:56:51.743Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-14T19:59:39.101Z+08:00
*/

#include <stdio.h>
 
int main( )
{
    long ge,shi,qian,wan,x;
    printf("Please input a 5 digits number:");
    scanf("%ld",&x);
    wan=x/10000;        /*分解出万位*/
    qian=x%10000/1000;  /*分解出千位*/
    shi=x%100/10;       /*分解出十位*/
    ge=x%10;            /*分解出个位*/
    if (ge==wan&&shi==qian) { /*个位等于万位并且十位等于千位*/
        printf("Ture\n");
    } else {
        printf("False\n");
    }
}