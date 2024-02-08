/**
* Memory leak example. The free call is commented, so the memory allocated by malloc is not released.
* The leak can be detected if you run the valgrind tool.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int* p = malloc(sizeof(int));
    *p = 10;
    printf("*p: %d\n", *p);
    // free(p);

    return 0;
}
