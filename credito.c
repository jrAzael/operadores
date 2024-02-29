#include <stdio.h>

int main (){
int edad=0;
int sueldo =0;
printf("ingresar el tiempo que lleva trabajando ");
  scanf("%d", &edad);
printf("ingresar el sueldo %d\n",&sueldo);
  scanf("%d", &sueldo);
  if (edad>=5){
    double x=(sueldo*100)/5;
    if(sueldo>=x){
   printf("es sujeto a credito");
    }

  }
  return 0;



}
