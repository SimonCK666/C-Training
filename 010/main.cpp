//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//
//程序分析：利用while语句,条件为输入的字符不为'\n'。
#include <stdio.h>
int main() {
    int letter = 0, spaces = 0, digits = 0, others = 0;
    char txt;
    printf("Please input a statement:\n");
//    scanf("%c",&txt);

    while ((txt = getchar()) != '\n') {
        if ((txt >= 'a' && txt <= 'z') || (txt >= 'A' && txt <= 'Z')) {
            letter++;
        } else if (txt >= '0' && txt <= '9') {
            digits++;
        } else if (txt == ' ') {
            spaces++;
        } else {
            others++;
        }
    }
    printf("Letters are %d;\nDigits are %d;\nSpaces are %d;\nOthers are %d.\n", letter,digits,spaces,others);
    return 0;
}


//Official
//#include<stdio.h>
//int main()
//{
//    char c;
//    int letters=0,spaces=0,digits=0,others=0;
//    printf("请输入一些字母：\n");
//    while((c=getchar())!='\n')
//    {
//        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
//            letters++;
//        else if(c>='0'&&c<='9')
//            digits++;
//        else if(c==' ')
//            spaces++;
//        else
//            others++;
//    }
//    printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letters,digits,spaces,others);
//    return 0;
//}