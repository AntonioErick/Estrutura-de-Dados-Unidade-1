#include <stdio.h>
#include <stdlib.h>

/* tpedef

*/

struct professor {
	char nome[50];
	int idade;
	long int matricula;
	char email;
};

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

void preenche2 (struct professor *docente){
	printf ("Digite o nome do professor: \n");
    scanf (" %[^\n]", docente->nome);
    printf ("Digite a idade do professor: \n");
    scanf (" %[^\n]", &docente->idade);
    printf ("Digite a matricula do professor: \n");
    scanf (" %[^\n]", &docente->matricula);
    printf ("Digite o email do professor: \n");
    scanf (" %[^\n]", docente->email);
}


void imprimir (struct aluno *estudante){
	printf ("Nome: %s\n Idade: %d\n Matricula: %d\n Email: %s\n", estudante->nome, estudante->idade, estudante->matricula, estudante->email);
}

void imprimir2 (struct professor *docente){
	printf ("Nome: %s\n", docente->nome);
	printf ("Idade: %d\n", docente->idade);
	printf ("Matricula: %d\n", docente->matricula);
	printf ("Email: %s\n", docente->email);
}


//ALOCAÇÃO DINÂMICA DE STRUCT POIAS A VARÁVEL AGORA É UM PONTEIRO
int main (){
	struct aluno *estudante = (struct aluno *) malloc(sizeof(struct aluno));
	if (estudante == NULL){
		exit (1);
	}
	
	struct professor *docente = (struct professor *) malloc(sizeof(struct professor*));
		if (docente == NULL){
		exit (1);
	}
	
	preenche (estudante);
	imprimir (estudante);
	
	preenche2 (docente);
	imprimir2 (docente);
	
    free (estudante);
    free (docente);
    
	return 0;
}












