#include <stdio.h>

#define TRUE 0
#define FALSE 1


int main(){
    int resposta;
    printf ("Voce gosta de algoritmis? \n 0 - TRUE \n 1 - FALSE\n");
    scanf ("%d", &resposta);
    if (resposta == TRUE){
        printf("Boa escolha");
    }
    else if(resposta == FALSE){
        printf ("que pena");
    }
    return 0;
}