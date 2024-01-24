/*Escreva um programa que implementa uma struct Produto com os campos nome, pre¸co e tipo. O
tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto. */

#include <stdio.h>
#include <stdlib.h>

typedef enum tipo{
    alimento,
    bebida,
    eletronico
}Tipo;

typedef struct produto{
    char nome[20];
    float preco;
    Tipo tipo_produto;
}Produto;

void get_produto(Produto *produto){
    printf("Informe o nome: \t");
    scanf (" %[^\n]", produto->nome);
    printf("Informe preço: \t");
    scanf (" %f", &produto->preco);
    printf("Informe o tipo: \n 0 - alimento \n 1 - bebida\n 2 - eletronico\n");
    scanf (" %d", &produto->tipo_produto);
}

void imprimir(Produto *produto) {
    printf("Nome: %s \n", produto->nome);
    printf("Preco: %d \n", produto->preco);
    
    if (produto->tipo_produto == alimento) {
        printf("Tipo: Alimento \n");
    } 
    else if (produto->tipo_produto == bebida) {
        printf("Tipo: Bebida \n");
    }
    else if (produto->tipo_produto == eletronico) {
        printf("Tipo: Eletronico \n");
    }
}

int main(){
    Produto *produto = malloc(sizeof(Produto));
    get_produto(produto);
    imprimir(produto);
    free(produto);
    return 0;
}