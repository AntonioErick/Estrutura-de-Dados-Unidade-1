#include <stdio.h>
#include <stdlib.h>


int main (){
	int N;
	int i;
	
	printf ("Type the number of people interviewed: ");
	scanf ("%i", &N);
	printf ("\n");
	system ("cls");
	
	int *sexo = (int *)malloc(N * sizeof(int));
    int *opiniao = (int *)malloc(N * sizeof(int));
	
	for (i = 0; i < N; ++i){
		
		printf ("Enter the persons %d gender (1 - Man | 2 - Woman): ", i + 1);//o "i + 1" faz com que o contador não comece do zero
		scanf (" %i", &sexo[i]);
		printf ("\n");
		printf ("Did person %d like the product? (1 - Yes | 2 - No): ", i + 1); //os espaços antes dos "%c" é para n quebrar a linha
		scanf (" %i", &opiniao[i]);
		printf ("\n");	
	}

	int mulheresgostaram = 0;
	int mulheres = 0;
	
	for (int i = 0; i < N; i++){
		if (sexo[i] == 2){
			mulheres++;
			if (opiniao[i] == 1){
				mulheresgostaram++;
			}
		}
	}
	
	int homensnaogostaram = 0;
	int homens = 0;
	
	for (int i = 0; i < N; i++){
		if (sexo[i] == 1){
			homens++;
			if (opiniao[i] == 2){
				homensnaogostaram++;
			}
		}
	}
		
	 if (homens > 0) {
        float porcentagem1 = ( homensnaogostaram / homens) * 100;
        printf("Percentage of man who disliked the product: %.2f%%\n", porcentagem1);
    }

    if (mulheres > 0) {
        float porcentagem2 = ( mulheresgostaram / mulheres) * 100;
        printf("Percentage of women who liked the product: %.2f%%\n", porcentagem2);
    }
	
	free(sexo);
    free(opiniao);
	
	return 0;
}











