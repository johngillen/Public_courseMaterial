#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
    int myInt, myInt2, myInt3;
    int modValue;
    srand(time(0));

    myInt = rand();
    myInt2 = rand();
    myInt3 = rand();
    modValue = 100;

//    char myChar = 'b';
//    float myFloat = 123.45;

    // >
    if( myInt > ( myInt3 % modValue ) ){
        printf("IF: %d > ( %d mod %d )\n", myInt, myInt3, modValue);
    }else{
        printf("ELSE: %d > ( %d mod %d )\n", myInt, myInt3, modValue);
    }

    //<
    if( myInt < ( myInt3 % modValue ) ){
        printf("IF: %d < ( %d mod %d )\n", myInt, myInt3, modValue);
    }else{
        printf("ELSE: %d < ( %d mod %d )\n", myInt, myInt3, modValue);
    }

    // !=
    if( myInt != ( myInt3 % modValue ) ){
        printf("IF: %d != ( %d mod %d )\n", myInt, myInt3, modValue);
    }else{
        printf("ELSE: %d != ( %d mod %d )\n", myInt, myInt3, modValue);
    }

    int myInt5, myInt6;
    myInt5 = 5;
    myInt6 = 8;

    if( (myInt5 < myInt6) && (myInt5 > 0) ){
        printf("%d < %d && %d > 0\n", myInt5, myInt6, myInt5);
    }

    if( (myInt5 > myInt6) && (myInt5 > 0) ){
        printf("%d < %d && %d > 0\n", myInt5, myInt6, myInt5);
    }else{
        printf("FALSE\n");
    }

    if( (myInt5 > myInt6) || (myInt5 > 0) ){
        printf("%d > %d || %d > 0\n", myInt5, myInt6, myInt5);
    }else{
        printf("FALSE\n");
    }

    return 0;
}