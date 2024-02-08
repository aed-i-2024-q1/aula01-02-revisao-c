/**
    * This program demonstrates the difference between passing parameters by value and by reference.
    * 
    * When passing parameters by value, the original arguments are not modified by the function.
    * When passing parameters by reference, the original arguments can be modified by the function. 
*/

#include <stdio.h>

int add(int a, int b) {
    a = 10;
    b = 20;

    return a + b;
}

int add(int* a, int* b) {
    *a = 10;
    *b = 20;
    return *a + *b;
}

int main(int argc, char const *argv[]) {
    int x = 1;
    int y = 2;
    printf("%d + %d = %d\n", x, y, add(&x, &y));
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    return 0;
}