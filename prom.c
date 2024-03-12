
#include<stdio.h>
#include<conio.h>

void main()
{
float numero;
float promedio=0;

printf("Dame el primer número: ");
scanf("%f",&numero);
promedio+=numero;

/* La expresión anterior es equivalente a promedio=promedio+numero */

printf("Dame el segundo número: ");
scanf("%f",&numero);
promedio+=numero;
printf("Dame el tercer número: ");
scanf("%f",&numero);
promedio+=numero;
promedio/=3;
/* La expresión anterior es equivalente a promedio=promedio/3 */
clrscr();printf("\n\n\n\n\n\t\t\t");
printf("El promedio es %f",promedio);
printf("\n\n\t");
printf("Presione cualquier tecla para terminar...\n");
getch();
} 