#include <stdio.h>

int main (){
int hor=0;
int pH=0;
int tot=0;
printf("horas semanales trabajdas :");
  scanf("%d", &hor);

printf("precio por hora ");
  scanf("%d", &pH);

  if (hor<=40){
    tot =hor*40;
    printf("salario semanal es de : %d",tot);
    printf("\n");
    return 0;
  }else 
  if (hor>40){
   tot=(40*pH+(pH*1.5*(hor-40)));
    printf("salario semanal es de : %d",tot);
    printf("\n");

    return 0;

  }

  return 0;



}