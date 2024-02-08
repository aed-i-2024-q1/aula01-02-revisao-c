/**
*    A simple program to demonstrate the use of functions in C.
    
*/

int add(int a, int b) {
    return a + b;
}

int main(int argc, char const *argv[]) {
    printf("%d + %d = %d\n", add(1, 2));
    return 0;
}
