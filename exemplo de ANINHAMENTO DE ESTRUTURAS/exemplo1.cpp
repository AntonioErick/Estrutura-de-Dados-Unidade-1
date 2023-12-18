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
	Disciplina materias[7]; //Aninhamento de estrutura da disciplina na estrtura aluno
}Aluno;

int main (){
	Aluno aluno; //Declarado uma variavel do tipo aluno
	aluno.idade = 19; //Acessado a variavel idade dentro do aluno
	aluno.matricula = 202314151;
	aluno.materias[0].codigo = 875471;
	
	printf (" %d, %d, %d\n", aluno.idade, aluno.matricula, aluno.materias.codigo);
	return 0;
}
