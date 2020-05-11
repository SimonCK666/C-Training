/**
* throughArray.c
* @author bulbasaur
* @description 
* @created 2020-04-28T11:06:47.026Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-28T11:14:25.709Z+08:00
*/

#include <stdio.h>

int main() {
    char ac[] = {1,2,3,4,5,6,7,8,9,-1};
    char *p = ac;
    
    int i;
    for (i = 0; i < sizeof(ac) / sizeof(ac[0]); i++)
    {
        /* code */
        printf("%d\t", ac[i]);
    }

    printf("\n-------------------\n");
    printf("\n");

    
    // for ( p = ac; *p != -1; *p++)
    // {
    //     /* code */
    //     printf("%d\t", *p);
    // }


    printf("\n-------------------\n");
    printf("\n");

    
    while (*p != -1)
    {
        printf("%d\t", *p++);
    }
    
    printf("\n");
    
    return 0;
}