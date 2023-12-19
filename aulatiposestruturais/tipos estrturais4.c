#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome [50];
    int idade;
    long int matricula;
    char email[50];
};

void preenche (struct aluno *estudante){
	printf ("Digite o nome do aluno: \n");
    scanf (" %[^\n]", estudante->nome);
    printf ("Digite a idade do aluno: \n");
    scanf (" %[^\n]", &estudante->idade);
    printf ("Digite a matricula do aluno: \n");
    scanf (" %[^\n]", &estudante->matricula);
    printf ("Digite o email do aluno: \n");
    scanf (" %[^\n]", estudante->email);
}

void imprimir (struct aluno *estudante){
	printf ("Nome: %s\n Idade: %d\n Matricula: %d\n Email: %s\n", estudante->nome, estudante->idade, estudante->matricula, estudante->email);
}


//ALOCAÇÃO DINÂMICA DE STRUCT POIAS A VARÁVEL AGORA É UM PONTEIRO
int main (){
	struct aluno *estudante = (struct aluno *) malloc(sizeof(struct aluno));
	if (estudante == NULL){
		exit (1);
	}
	
	preenche (estudante);
	imprimir (estudante);
	
    free (estudante);
	return 0;
}












