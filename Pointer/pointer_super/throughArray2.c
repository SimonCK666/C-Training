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

    printf("\n");
    printf("\n-------------------\n");
    printf("\n");

    for ( p = ac; *p != -1; *p++)
    {
        /* code */
        printf("%d\t", *p);
    }

    return 0;
}