#include <stdio.h>

int main()
{
    int i=1, numero;
 printf("\n   Introduzca un numero entero: ");
 scanf( "%d", &numero );
 printf( "\n   La tabla de multiplicar del %d es:\n", numero );

for ( i=1; i <= 10 ; i++ ){

 printf( " %d * %d = %d \n", i, numero, i * numero );

}
        
    return 0;
}