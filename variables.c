/**
* Variables in C
*/

#include <stdio.h>

int main(void) {
    // mutable variable
    int x = 10;

    x = 20;

    // immutable variable
    const int y = 10;

    // y = 20; // compilation error

    printf("%d %d\n", x, y);

    return 0;
}
