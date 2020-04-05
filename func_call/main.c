/**
* main.c
* @author bulbasaur
* @description 
function call
* @created 2020-03-23T20:02:14.040Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-23T20:05:31.324Z+08:00
*/

#include <stdio.h>

void hello_world(void) {
    printf("hello world\n");
}

void three_hellos(void) {
    int count;
    for (count = 1; count < 4; count++)
    {
        // call the function
        hello_world();
        // printf("hello world");
    }
    
}

int main(void) {
    // call the function
    three_hellos();
}