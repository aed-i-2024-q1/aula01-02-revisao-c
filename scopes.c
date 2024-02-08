/**
* Demonstration of variable scopes, lifetimes and shadowing
*/ 
 #include <stdio.h>
 
 int x = 10;

int main() {
    int y = 20;
    for (int i = 0; i < 2; i++) {
        int z = 30;
        int x = 40;
        printf("x: %d\n", x);
        printf("y: %d\n", y);
        printf("z: %d\n", z);
    }
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    // printf("z: %d\n", z); // error: use of undeclared identifier 'z'
    return 0;
}