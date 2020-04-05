/**
* 022.c
* @author bulbasaur
* @description 删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
* @created 2020-03-23T19:27:00.444Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-23T19:41:50.744Z+08:00
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#define SIZE 100
char* deleteCharacters(char *str, char *charSet);
int main() {
    // 要删除的字母
    char s[2] = "a";
    // 目标字符串
    char s2[5] = "aca";

    printf("%s\n", deleteCharacters(s2, s));    

    return 0;
}


// Delete the character
char* deleteCharacters(char *str, char *charSet) {
    int hash[256];
    if (NULL == charSet)
    {
        return str;
    }
    for (int i = 0; i < 256; i++)
    {
        hash[i] = 0;
    }
    for (int i = 0; i < strlen(charSet); i++)
    {
        hash[charSet[i]] = 1;
    }
    int currentIndex = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (hash[str[i]])
        {
            str[currentIndex++] = str[i];
        }
        
    }
    str[currentIndex] = '\0';
    return str;
}