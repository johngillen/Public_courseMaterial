#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int temp = rand();
    int temp2 = rand();
    int temp3 = rand();
    int modValue = 100;

    printf("%d\n", temp%modValue);
    printf("%d\n", temp2%modValue);
    printf("%d\n", temp3%modValue);

    printf("\n\n\n");

    srand(time(0));

    int temp4 = rand();
    int temp5 = rand();
    int temp6 = rand();

    printf("%d\n", temp4%modValue);
    printf("%d\n", temp5%modValue);
    printf("%d\n", temp6%modValue);

    return 0;
}