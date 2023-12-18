#include <stdio.h>
#include <stdlib.h>

/*exemplo de ANINHAMENTO DE ESTRUTURAS*/

typedef struct disciplina{
	char nome[20];
	float nota;
	int codigo;
}Disciplina;

typedef struct aluno{
	char nome[50];
	int idade;
	long int matricula;
	Disciplina *materias; //Aninhamento de estrutura da disciplina na estrtura aluno
}Aluno;

int main (){
	Aluno *aluno = (Aluno *) malloc (sizeof(Aluno));
	if (aluno == NULL){
		exit (1);
	}
	//Alocado memoria para vetor de 2 disciplina
	aluno->materias = (Disciplina*) malloc (2 * sizeof(Disciplina));
		if (aluno->materias == NULL){
		exit (1);
	}
	printf ("Informe os dados do aluno nome, idade, matricula\n");
	scanf (" %[^\n]", aluno->nome);
	scanf (" %d", &aluno->idade);
	scanf (" %d", &aluno->matricula);
	//cadastro das disciplinas
	
	int index;
	for (index= 0; index < 2; index ++){
		printf ("Cadastro das disciplinas %d\n", index + 1);
		//lendo nome da disciplina
		scanf (" %[^\n]", aluno->materias[index].nome);
		scanf (" %d", &aluno->materias[index].codigo);
		scanf (" %d", &aluno->materias[index].nota);
	}
	return 0;
}









