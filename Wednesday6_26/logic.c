#include <stdio.h>
#include <stdlib.h>

int main(void){
    int temp = 5;
    int temp2 = 10;
    //&&
    if( (temp > temp2) && (temp > 0) ){
        printf("number is in the range 0 - %d\n", temp2);
    }else{
        printf("temp = %d temp2 = %d\n", temp, temp2);
    }

    //||
    if( (temp > temp2) || (temp > 0) ){
        printf("number is in the range 0 - %d\n", temp2);
    }else{
        printf("temp = %d temp2 = %d\n", temp, temp2);
    }



    return 0;
}