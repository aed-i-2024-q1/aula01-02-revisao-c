/**
* Demonstration of pointer operations
*/

#include <stdio.h>

/**
* This function prints the address of three variables

*/
void show_address(void) {
    int x = 10;
    int y = 20;
    int z = 30;
    
    printf("x: %p\n", &x);
    printf("y: %p\n", &y);
    printf("z: %p\n", &z);
}

/**
* This function declares three pointers and print their initial content.
*/
void pointer_declaration(void) {
    int* p;
    float* q;
    char* r;

    printf("p: %p\n", p);
    printf("q: %p\n", q);
    printf("r: %p\n", r);
}

/**
* This function prints the address of three pointers.

*/
void pointer_address() {
    int* p;
    float* q;
    char* r;

    printf("&p: %p\n", &p);
    printf("&q: %p\n", &q);
    printf("&r: %p\n", &r);
}

/**
* This function initializes three pointers and prints their content.
*/
void pointer_initialization(void) {
    int x = 10;
    float y = 3.14;
    char z = 'a';

    int* p = &x;
    float* q = &y;
    char* r = &z;

    printf("&x: %p\n", &x);
    printf("&y: %p\n", &y);
    printf("&z: %p\n", &z);
    printf("&p: %p\n", &p);
    printf("&q: %p\n", &q);
    printf("&r: %p\n", &r);
    printf("p: %p\n", p);
    printf("q: %p\n", q);
    printf("r: %p\n", r);
}

/**
* This function demonstrates pointer dereferencing.
*/
void pointer_dereference(void) {
    int x = 10;
    float y = 3.14;
    char z = 'a';

    int* p = &x;
    float* q = &y;
    char* r = &z;

    printf("*p: %d\n", *p);
    printf("*q: %f\n", *q);
    printf("*r: %c\n", *r);
}

int main(int argc, char const *argv[])
{
    show_address();
    pointer_declaration();
    pointer_initialization();
    pointer_dereference();
    pointer_address();

    return 0;
}
