/**
* Demonstration of relational expressions
*/

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 20;

    bool z = x < y;
    bool w = x > y;
    bool k = x == y;
    bool l = x != y;
    bool m = x <= y;
    bool n = x >= y;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("w: %d\n", w);
    printf("k: %d\n", k);
    printf("l: %d\n", l);
    printf("m: %d\n", m);
    printf("n: %d\n", n);

    return 0;
}
