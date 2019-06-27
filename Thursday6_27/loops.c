#include <stdio.h>
#include <stdlib.h>

int main(void){

    int index = 0;
    int index2 = 0;
    int abcd = 0;

       //addition
        //abcd++;
        //++abcd;
        //abcd += 1;
        //abcd = abcd + 1;
        
        //subtraction
        //abcd--;
        //--abcd;
        //abcd -= 1;
        //abcd = abcd - 1;

        //multiplication
        //abcd *= 2;
        //abcd = abcd * 2

        //division
        //abcd /= 2;
        //abcd = abcd / 2;
    for(index = 0; index < 5; index++){
        printf("%d\n", index);
        for(index2 = 0; index2 < 2; ++index2){
            printf("\t%d\n", index2);
        }
    }

    //i'm not starting at 0 because i felt like it
    index = 10;

    while( index < 15){
        printf("while %d\n", index);
        index += 1;
    }

    return 0;
}