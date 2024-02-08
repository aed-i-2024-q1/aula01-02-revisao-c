/**
    * Example of how to dynamically allocate an array of integers using malloc.
    
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int* v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        v[i] = i;
    }

    for (int i = 0; i < n; i++) {
        printf("v[%d]: %d\n", i, v[i]);
    }

    free(v);

    return 0;
}