/**
* test.c
* @author bulbasaur
* @description 
* @created 2020-04-28T10:35:49.004Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-28T11:51:45.149Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    void *p = 0;
    int cnt = 0;
    
    p = malloc(100 * 1024 * 1024);
    // p++;
    
    free(NULL);

    return 0;
}