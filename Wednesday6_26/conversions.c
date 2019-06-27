#include <stdio.h>
#include <stdlib.h>

int main(void){

    float my_float = 50.1;
    int my_int = 1;

    printf("implicit: %d + %f = %f\n",my_int, my_float, my_float + my_int);
    printf("explicit: %f + %d = %c\n", (float)my_int, (int)my_float, (char)(my_int+my_float));
    return 0;
}