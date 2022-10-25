#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int coche, moto, especiales, peso, cilindrada;
    int agricola, quad;

    printf("Vehiculo que utiliza hoy en dia (coche, moto o especial): ");
    scanf("%i", &coche);

    printf("Peso del vehiculo: ");
    scanf("%i", &peso);

    if(peso<2000){
       printf("Linea 1");
    }else if (2000<=peso && peso<2500){

    printf("Cilindrada: "); scanf("%d", &cilindrada);
    if (cilindrada<1200)
        printf("Linea 2");
    else if (cilindrada>=1200) {
        printf("Linea 5");

    }
















    return 0;
}
