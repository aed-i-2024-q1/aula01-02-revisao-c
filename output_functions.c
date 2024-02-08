/**
* Output functions in C
*/
#include <stdio.h>

void formatted_output(void) {
    // print formatted string
    printf("%d + %d = %d\n", 1, 2, 1 + 2);

    // writes into a string
    const char BUFFER_SIZE = 100;
    char buffer[BUFFER_SIZE];

    snprintf(buffer, BUFFER_SIZE, "The result of %d + %d is %d\n", 1, 2, 1 + 2);
    printf("%s\n", buffer);
}

void unformatted_output(void) {
    // print a single char
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar('\n');

    // print a string
    puts("Hello, world!");
}

int main(void) {
    formatted_output();
    unformatted_output();

    return 0;

}