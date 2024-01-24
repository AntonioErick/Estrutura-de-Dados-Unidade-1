/*Escreva um programa que implementa uma struct Data com os campos dia, mˆes e ano. O mˆes deve
ser armazenado como um enum com os valores JANEIRO, FEVEREIRO, MARC¸ O, ABRIL, MAIO,
JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO e DEZEMBRO. O programa
deve ler a data e imprimir a data no formato dd/mm/aaaa.
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum mes{
    janeiro = 1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro
}Mes;

typedef struct data{
    int dia;
    Mes meses;
    int ano;
}Data;

void get_data(Data *data){
    printf("Informe o dia: \t");
    scanf (" %d", &data->dia);

    printf("Informe o mes (Informe o numero respectivo ao mes, por exemplo: setembro = 9): \t");
    scanf (" %d", &data->meses);

    printf("Informe o ano: \t ");
    scanf (" %d", &data->ano);
}

void imprimir(Data *data) {
    printf("%d / %d / %d \n", data->dia, data->meses, data->ano);
}

int main(void){
    Data *data = malloc(sizeof(Data));
    get_data(data);
    imprimir(data);
    free(data);
    return 0;
}