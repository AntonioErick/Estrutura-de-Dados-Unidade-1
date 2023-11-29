# include <stdio.h>
int main ( ) {
int i ;
for ( i =1 ; i <= 100 ; i *=100) { //Multiplica o valor i por 100.
if ( i ==30 ) {
break ;
}
else {
printf ("%2d\n" ,2* i ) ;//Já que i não é igual a 30, o valor 100 antribuido no laço de repetição anterior será multiplicado por 2.
}
}
printf ("Fim do laco !\n") ;//A saída do programa é 200, fim de laço.
return 0;
}

