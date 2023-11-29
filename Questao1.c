#include <stdio.h>

int main(){
	
	int A[5], B[5];
	int i, j = 4;
	
	printf ("Digite 5 valores:\n", i);
	
	for (i = 0; i < 5; i++){
		scanf ("%i", &A[i]);
	}
	
	for (i = 0; i < 5; i++){
		B[j] = A[i];
		j--;
	}
	
	for (i = 0; i<5; i++){
		printf ("A[%i] = %i B[%i] = %i\n", i, A[i], i, B[i]);
	}
	
}

