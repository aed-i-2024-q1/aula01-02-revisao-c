/**
    * Control Structures
    * 
    * - if-else
    * - if-else-if-else
    * - switch-case
    * - while
    * - do-while
    * - for
    * - break
    * - continue
    * - goto
    * - ternary operator
    
*/

#include <stdio.h>

void if_else(void) {
    int x = 10;

    if (x == 10) {
        printf("x is equal to 10\n");    
    }

    if (x > 5) {
        printf("x is greater than 5\n");
    } else {
        printf("x is less than or equal to 5\n");
    }
}

void if_elseif_else(void) {
    int x = 15;

    if (x == 10) {
        printf("x is equal to 10\n");
    } else if (x > 5) {
        printf("x is greater than 5\n");
    } else if (x == 5) {
        printf("x is equal to 5\n");
    } else {
        printf("x is less than 5\n");
    }
}

void switch_case(void) {
    int x = 10;

    switch (x) {
        case 5:
            printf("x is equal to 5\n");
            break;
        case 10:
            printf("x is equal to 10\n");
            break;
        default:
            printf("x is not equal to 5 or 10\n");
    }
}

void while_loop(void) {
    int x = 0;

    while (x < 10) {
        printf("%d\n", x);
        x++;
    }
}

void do_while_loop(void) {
    int x = 0;

    do {
        printf("%d\n", x);
        x++;
    } while (x < 10);
}

void for_loop(void) {
    for (int x = 0; x < 10; x++) {
        printf("%d\n", x);
    }
}

void break_statement(void) {
    for (int x = 0; x < 10; x++) {
        if (x == 5) {
            break;
        }

        printf("%d\n", x);
    }
}

void continue_statement(void) {
    for (int x = 0; x < 10; x++) {
        if (x == 5) {
            continue;
        }

        printf("%d\n", x);
    }
}

void goto_statement(void) {
    int x = 0;

    loop:
    printf("%d\n", x);
    x++;

    if (x < 10) {
        goto loop;
    }
}

void ternary_operator(void) {
    int x = 10;

    x > 5 ? printf("x is greater than 5\n") : printf("x is less than or equal to 5\n");
}

int main(void) {
    
    if_else();
    // if_elseif_else();
    // switch_case();
    // while_loop();
    // do_while_loop();
    // for_loop();
    // break_statement();
    // continue_statement();
    // goto_statement();
    // ternary_operator();


    return 0;
}