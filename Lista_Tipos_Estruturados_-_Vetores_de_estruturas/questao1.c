#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct ingressos{
    float preco;
    char local[50];
    char atracao[50];
}Ingressos;

void preencher_ingressos(Ingressos *i){
    printf ("Digite o valor do ingresso: \t");
    scanf (" %f", &i->preco);

    printf ("Digite o local: \t");
    scanf (" %[^\n]", i->local);

    printf ("Digite a atracao: \t");
    scanf (" %[^\n]", i->atracao);
}

void imprimir_ingresso(Ingressos *i){
    printf ("O valor do ingresso e: %f \n", i->preco);
    printf ("O local e: %s \n", i->local);
    printf ("A atracao e: %s \n", i->atracao);
}

void altera_preco(Ingressos *i, float valor){
    i->preco = valor;

    printf ("O valor do ingresso e: %.2f \n", i->preco);
    printf ("O local e: %s \n", i->local);
    printf ("A atracao e: %s \n", i->atracao);
}

void menormaiorpreco(Ingressos *i, int tamanho) {
    int maior = 0, menor = 0;

    for (int j = 1; j < tamanho; j++) {
        if (i[j].preco > i[maior].preco) {
            maior = j;
        } 
        else if (i[j].preco < i[menor].preco) {
            menor = j;
        }
    }

    printf("O ingresso mais caro e: %s\n e o preco é: %.2f", i[maior].atracao, i[maior].preco);

    printf("O ingresso mais barato e: %s\n e o preco é: %.2f", i[menor].atracao, i[menor].preco);
}

int main (void){
    float valor;
    int quant;

    printf("digite a quantidade de ingressos que deseja cadastrar: ");
    scanf(" %d", &quant);
    printf ("\n");

    Ingressos *ingresso = malloc( quant * sizeof(Ingressos));

    for(int j = 0; j < quant; j++){
        preencher_ingressos(&ingresso[j]);
        printf ("\n");
    }

    for(int j = 0; j < quant; j++){
        imprimir_ingresso(&ingresso[j]);
        printf ("\n");
    }

    printf("Digite um novo valor para o primeiro ingresso: \t");
    scanf(" %f", &valor);

    altera_preco(&ingresso[0], valor);
    printf ("\n");

    menormaiorpreco(ingresso, quant);

    free(ingresso);
    return 0;
}