#include <stdio.h>
#include <stdlib.h>

int main(void){

    int var1 = 10;
    int var2 = 12;
    int var3 = 10;
    //< > !=

    // >=
    //var2 = 12. var1 = 10
    if( (var2 >= var1) ){
        printf("%d IS GREATER THAN OR EQUAL TO %d\n", var2, var1);
    }else{
        printf("THIS SHOULD NOT FIRE.\n");
    }

    // <=
    //var2 12, var1 10
    if( (var2 <= var1) ){
        printf("%d IS LESS THAN OR EQUAL TO %d\n", var2, var1);
    }else{
        printf("THIS SHOULD FIRE.\n");
    }
    return 0;
}