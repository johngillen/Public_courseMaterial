#include <stdlib.h>
#include <stdio.h>

int main(void){
    int intVariable;
    char charVariable;
    float floatVariable;
    
    //const char constStaticCharVariable;

    intVariable = 12345;
    charVariable = 'C';
    floatVariable = 123.45;

    printf("Displaying int %d\n", intVariable);
    printf("Displaying char %c\n", charVariable);
    /*
     * Floating point 6.2f
     * 6 - 6 total 'things' to print:
     *      123 - 3 numbers before the '.': 3
     *      '.' - the decimal point       : 4
     *      45  - 2 numbers after the '.' : 6
     * .2 - two significant digits to print after the '.'
     * 'f' - format specifier
     */
    printf("Displaying float %6.2f\n", floatVariable);

    return 0;
}