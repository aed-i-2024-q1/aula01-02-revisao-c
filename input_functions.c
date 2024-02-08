/**
* This program demonstrates how to use the input functions in C.
* 
*/

#include <stdio.h>

/**
    * This function demonstrates how to get a single character from the user.
    
*/
void get_single_char(void) {
    char c = getchar();
    getchar();

    putchar(c);
    putchar('\n');

}

/**
    * This function demonstrates how to get a string from the user.
*/
void get_string(void) {
    const int BUFFER_SIZE = 100;
    char buffer[BUFFER_SIZE];

    fgets(buffer, BUFFER_SIZE, stdin);
    puts(buffer);
}

/**
    * This function demonstrates how to get an integer from the user.
*/
void get_int(void) {
    int i;
    scanf("%d", &i);
    printf("i = %d\n", i);
}

/**
    * This function demonstrates how to get various types from the user using  
    * a single-line `scanf` call.
    
*/
void get_various_types(void) {
    int i;
    float f;
    char c;
    char buffer[100];

    scanf("%d %f %c", &i, &f, &c);
    printf("i = %d, f = %f, c = %c\n", i, f, c);

    scanf("%s", buffer);
    printf("buffer = %s\n", buffer);
}

int main(void) {
    get_single_char(); 
    get_string();
    get_int();
    get_various_types();

    return 0;
}