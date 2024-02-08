/**
    * boolean_expressions.c
    *   This program demonstrates the use of boolean expressions in C.
    *   It uses the stdbool.h library to declare the boolean type.
*/

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool x = true;
    bool y = false;

    bool z = x && y;
    bool w = x || y;
    bool k = !x;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("w: %d\n", w);
    printf("k: %d\n", k);

    return 0;
}
