#include <stdio.h>

int main (){

    int descuento=10;
    int descuentOCliente =20;
    int cliente =2;
    int z=0;

    z= (cliente) ? descuentOCliente : descuento;
    printf("el descuento es de %d \n",z);

    printf ("fin del programa\n");
    return 0;
}