
#include <stdio.h>

int main()
{
   int numero;

   for ( numero = 2 ; numero <= 10 ; numero +=2 )
   {
      printf( "%d ",numero*(numero*numero) );
   }

   return 0;
}