/**
* Demonstration of increment and decrement operators
*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int x = 10;
    int y = 20;
    int z = x++ + --y;
    

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("%d\n", ++x - y);
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}
