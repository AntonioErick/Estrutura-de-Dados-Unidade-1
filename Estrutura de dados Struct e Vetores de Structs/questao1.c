#include <stdio.h>
#include <stdlib.h>

struct Funcionarios {
	char nome [50];
	int salario;
	long int identificador;
	char cargo [50];
};

void imprimir(struct Funcionarios *funcionario){
	printf ("Nome: %s\nSalario: %i\nIdentificacao: %i\nCargo: %s\n", funcionario->nome, funcionario->salario, funcionario->identificador, funcionario->cargo);
}

void preencher (struct Funcionarios *funcionario){
	printf ("Digite os dados do funcionario.\n");
	printf ("Nome: ");
	scanf (" %s", funcionario->nome);
	printf ("Salario: ");
	scanf (" %i", &funcionario->salario);
	printf ("Identificacao: ");
	scanf (" %i", &funcionario->identificador);
	printf ("Cargo: ");
	scanf (" %s", funcionario->cargo);
}

void alterarsalario (struct Funcionarios *funcionario){
	int novosalario;
	printf ("Digite o novo salario: ");
	scanf (" %i", &novosalario);
	funcionario->salario = novosalario;
}
int main (){
	int opcao;
	int numerofuncionarios;
	struct Funcionarios *funcionario = (struct Funcionarios*) malloc (sizeof (struct Funcionarios));
	if (funcionario == NULL){
		exit (1);
	}
	
	printf ("Digite a quantidade de funcionarios: ");
	scanf (" %i", &numerofuncionarios);
	
	for (int i = 0; i < numerofuncionarios; i++){
		printf ("Funcionario %i°\n", i + 1);
		preencher (funcionario);	
	}
	
	system ("cls");
	
	for (int i = 0; i < numerofuncionarios; i++){
		imprimir(funcionario);
		printf ("\n");	
	}
	
	printf ("Deseja alterar o salario (1-SIM)(2-NAO)? ");
	scanf (" %i", &opcao);
	if (opcao == 1){
		alterarsalario (funcionario);	
		printf ("Salario alterado!");
	}
	
	
	return 0;
}





