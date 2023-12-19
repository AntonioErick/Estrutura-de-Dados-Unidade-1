#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
	char nome [50];
	int idade;
	long int numerodocumento;
};

void imprimir(struct Pessoa *dados){
	printf ("Nome: %s\nIdade: %i\nNumero do documento: %i\n", dados->nome, dados->idade, dados->numerodocumento);
}

void preencher (struct Pessoa *dados){
	printf ("Digite os dados da pessoa.\n");
	printf ("Nome: ");
	scanf (" %s", dados->nome);
	printf ("Idade: ");
	scanf (" %i", &dados->idade);
	printf ("Identificacao: ");
	scanf (" %i", &dados->numerodocumento);

}

void alteraridade (struct Pessoa *dados){
	int novaidade;
	printf ("Digite a nova idade: ");
	scanf (" %i", &novaidade);
	dados->idade = novaidade;
}
int main (){
	int opcao;
	int numerodepessoas;
	struct Pessoa *dados = (struct Pessoa *) malloc (sizeof (struct Pessoa));
	if (dados == NULL){
		exit (1);
	}
	
	printf ("Digite a quantidade de pessoas: ");
	scanf (" %i", &numerodepessoas);
	
	for (int i = 0; i < numerodepessoas; i++){
		printf ("Pessoa %i°\n", i + 1);
		preencher (dados);	
	}
	
	system ("cls");
	
	for (int i = 0; i < numerodepessoas; i++){
		imprimir(dados);
		printf ("\n");	
	}
	
	printf ("Deseja alterar a idade (1-SIM)(2-NAO)? ");
	scanf (" %i", &opcao);
	if (opcao == 1){
		alteraridade (dados);	
		printf ("Idade alterada!");
	}
	
	
	return 0;
}





