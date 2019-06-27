#include <stdio.h>
#include <stdlib.h>

int main(void){

    int number1 = 5;
    int number2 = 10;
    int result;

    //Do addition
    result = number1 + number2;
    printf("addition: %d + %d = %d\n", number1, number2, result);

    //Do subtraction
    result = number1 - number2;
    printf("subtraction: %d - %d = %d\n", number1, number2, result);

    result = number2 - number1;
    printf("subtraction: %d - %d = %d\n", number2, number1, result);

    //do multiplication
    result = number1 * number2;
    printf("multiplication: %d * %d = %d\n", number1, number2, result);

    //Do division
    result = number2 / number1;
    printf("division: %d / %d = %d\n", number2, number1, result);

    //do modulus
    result = number2 % number1;
    printf("modulus: %d mod %d = %d\n", number2, number1, result);

    number2 = 11;
    number1 = 2;
    result = number2 % number1;

    printf("modulus: %d mod %d = %d\n", number2, number1, result);

    return 0;
}