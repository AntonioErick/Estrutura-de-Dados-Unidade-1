#include <stdio.h>

int main (){
	int x, *p;
	x = 100;
	p = &x;
	printf ("Valor de p =%p\tValor de *p =%d", p, *p);
	
}

//Respostas: 
//a) Advertência.
//b) Não tem o o operador de endereço "&" na linha 6.
//c) Não
//d) Modificado
//c) Sim, "Valor de p = 0062FE14". 
