#include <stdio.h>

//Aqui foi definido uma matriz 3x3.
int f (int mat [3][3]) {
//Aqui será realizado um conjunto de operações matemáticas.	
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}
//Aqui foi definido uma nova função.
int main ( void ) {
//Aqui foram alocados os valores de m dentro da matriz	
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
//Que serão armazenadas na seguinte variavel.
int de = f ( m ) ;
//E por último é impresso o resultado -5.
printf (" Resultado = \t %d", de ) ;

return 0;
}

