#include <math.h>
#include <stdio.h>

int main()
{
   int contador;
   float arista;

   printf( "Introduzca arista: " );
   scanf( "%f", &arista );

   contador = 0; /* Inicialización del contador */

   while ( arista > 0 )
   {
      printf( "El volumen de un cubo de arista %f es: %f\n",
               arista, ( arista ) );

      contador++; /* Incremento*/

      printf( "Introduzca arista :" );
      scanf( "%f", &arista );
   }

   printf( "Ha calculado el volumen de %d cubo(s).", contador );

   return 0;
}