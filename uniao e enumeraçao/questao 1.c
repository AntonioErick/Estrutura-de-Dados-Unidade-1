#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum genero{
    masculino,
    feminino
}Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero genero_pessoa;
}Pessoa;

void get_dados (Pessoa * pessoa){
    printf("Informe o nome: \t");
    scanf (" %[^\n]", pessoa->nome);

    printf("Informe a idade: \t");
    scanf ("%d", &pessoa->idade);

    printf("Informe o genero: \n 0 - masculino \n 1 - feminino\n");
    scanf ("%d", &pessoa->genero_pessoa);
}

void imprimir_pessoa(Pessoa * pessoa) {
    printf("Nome: %s \n", pessoa->nome);
    printf("Idade: %d \n", pessoa->idade);
    printf("Genero: %s \n", pessoa->genero_pessoa==masculino? "Masculino":"Feminino");
}

int main(void){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    get_dados(pessoa);
    imprimir_pessoa(pessoa);
    free(pessoa);
    return 0;
}