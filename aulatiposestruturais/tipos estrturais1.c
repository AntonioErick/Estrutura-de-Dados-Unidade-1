#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome [50];
    int idade;
    long int matricula;
    char email[50];
};

int main (){

    struct aluno estudante;
    printf ("Digite o nome do aluno: \n");
    scanf (" %[^\n]", estudante.nome);

    printf ("Digite a idade do aluno: \n");
    scanf (" %[^\n]", &estudante.idade);

    printf ("Digite a matricula do aluno: \n");
    scanf (" %[^\n]", &estudante.matricula);

    printf ("Digite o email do aluno: \n");
    scanf (" %[^\n]", estudante.email);

    return 0;
}

