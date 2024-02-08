/**
    * This program prints the size of the data types in bits.
    * 
    * The `sizeof` operator returns the size of a data type in bytes.    
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    printf("char: %ld bits\n", sizeof(char) * 8);
    printf("int: %ld bits\n", sizeof(int) * 8);
    printf("short: %ld bits\n", sizeof(short) * 8);
    printf("long: %ld bits\n", sizeof(long) * 8);
    printf("long long: %ld bits\n", sizeof(long long) * 8);
    printf("float: %ld bits\n", sizeof(float) * 8);
    printf("double: %ld bits\n", sizeof(double) * 8);
    printf("long double: %ld bits\n", sizeof(long double) * 8);
    printf("bool: %ld bits\n", sizeof(bool) * 8);

    return 0;
}