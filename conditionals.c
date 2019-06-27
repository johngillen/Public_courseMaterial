#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(0));

    int random = rand()%358;

    printf("%d\n", (random % 2) );
    printf("%d\n", random);

    // ==
    if( (0 == (random % 2)) )
    {
        printf("number is even\n");
    }else{
        printf("number SHOULD be odd\n");
    }

    // <
    int temp = 5;
    int temp2 = 10;
    if( (temp < temp2) ){
        printf("%d < %d\n", temp, temp2);
    }
    // >
    if( (temp > temp2) ){
        printf("%d > %d\n", temp, temp2);
    }else{
        printf("%d IS NOT > %d\n", temp, temp2);
    }
    // !=
    if( (temp != temp2) ){
        printf("%d != %d\n", temp, temp2);
    }else{
        printf("%d DOES NOT = %d\n", temp, temp2);
    }

    //example
    if (temp > temp2)
        printf("%d > %d\n", temp, temp2);
    else
        printf("%d < %d\n", temp, temp2);

    return 0;
}