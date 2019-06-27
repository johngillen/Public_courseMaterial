/*
 * Name: Alex Wollman
 * Assignment: Inclass-1
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int value1 = 0;
    int value2 = 0;
    int index = 0;

    value1 = 10;
    value2 = 100;

    //<=
    if( value1 <= value2 ){
        printf("%d <= %d\n", value1, value2);
    }
    
    for(index; index < value2; ++index){
        printf("Incrementing value1 %d\n", value1);
        value1++;
    }

    //>=
    if( value1 >= value2){
        printf("%d >= %d\n", value1, value2);
    }

    while( value1 < 200 ){
        printf("Incrementing value1 %d\n", value1);
        value1 = value1 + 6;
    }

    return 0;
}