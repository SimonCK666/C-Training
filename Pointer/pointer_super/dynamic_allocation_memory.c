/**
* dynamic_allocation_memory.c
* @author bulbasaur
* @description 
* @created 2020-04-28T11:35:16.586Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-28T11:46:05.417Z+08:00
*/

#include <stdio.h>

// Use malloc to import the library
#include <stdlib.h>

int main() {
    int number;
    int *a;
    int i;
    
    printf("Input Number: ");
    scanf("%d", &number);
    
    a = (int*)malloc(number * sizeof(int));
    
    printf("Input items: ");
    for ( i = 0; i < number; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    

    printf("Result: ");
    for ( i = number - 1; i >= 0; i--)
    {
        /* code */
        printf("%d\t", a[i]);
    }

    // must free the memory
    free(a);
    
    return 0;
}