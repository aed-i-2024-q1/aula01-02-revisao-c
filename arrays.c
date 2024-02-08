/**
* How to declare, initialize and access arrays in C.
*/

#include <stdio.h>

void init_with_size() {
    const int qtde_alunos = 4;
    char conceitos[qtde_alunos];

    conceitos[0] = 'A';
    conceitos[1] = 'B';
    conceitos[2] = 'C';
    conceitos[3] = 'D';

    for (int i = 0; i < qtde_alunos; i++) {
        printf("Aluno %d: %c\n", i + 1, conceitos[i]);
    }
}

void init_statically() {
    char conceitos[] = {'A', 'B', 'C', 'D'};

    for (int i = 0; i < 4; i++) {
        printf("Aluno %d: %c\n", i + 1, conceitos[i]);
    }
}

int main(void) {
    init_with_size();
    init_statically();

    return 0;
}
