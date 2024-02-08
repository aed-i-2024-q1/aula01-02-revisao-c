/**
* Demonstration of structures, simple and composite
*/

#include <stdio.h>

void simple_structure() {
    struct Aluno {
        char nome[100];
        int idade;
        char conceito;
    };
    
    struct Aluno a1 = {
        .nome = "Joao", 
        .idade = 20, 
        .conceito = 'A'
    };

    printf("%s tem %d anos e obteve %c\n", a1.nome, a1.idade, a1.conceito);
}

void composite_structure() {
    struct Data {
        unsigned short dia;
        unsigned short mes;
        unsigned short ano;
    };
    
    struct Aluno {
        char nome[100];
        int idade;
        char conceito;
        struct Data nascimento;
    };
    
    struct Aluno a1 = {
        .nome = "Joao", 
        .idade = 20, 
        .conceito = 'A',
        .nascimento = {
            .dia = 1,
            .mes = 1,
            .ano = 2000
        }
    };
    
    printf("%s nasceu em %d/%d/%d\n", a1.nome, a1.nascimento.dia, a1.nascimento.mes, a1.nascimento.ano);
}

int main(void) {
    simple_structure();
    composite_structure();

    return 0;
}
