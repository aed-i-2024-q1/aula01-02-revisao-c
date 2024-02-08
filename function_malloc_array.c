/**
    * Example of a funcion that allocates an array of integers using malloc.
    * The desallocation of the memory is delegated to the caller, which must call free.
*/

#include <stdio.h>
#include <stdlib.h>

int* create_array(int n) {
    int* v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        v[i] = i;
    }
    return v;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int* v = create_array(n);
    for (int i = 0; i < n; i++) {
        printf("v[%d]: %d\n", i, v[i]);
    }
    free(v);

    return 0;
}