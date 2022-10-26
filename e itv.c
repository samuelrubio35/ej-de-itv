#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso, cilindrada;

    char tipo_v;
        printf("Introduzca los datos tipo/peso/cilindrada: ");
        scanf("%c/%f/%f",&tipo_v,&peso,&cilindrada);


if ((tipo_v == 'c') || (tipo_v == 'C'))

    //OPCION COCHE

    {

      if (peso < 2000)

        printf("Linea 1.\n");

      else if ((peso >= 2000) && (peso < 2500))

      {

        if (cilindrada < 1200)

          printf("Linea 3.\n");

        else

          printf("Linea 5.\n");

      }

      else if (peso >= 2500)

        printf("Linea 2.\n");

    }

  else if ((tipo_v == 'm') || (tipo_v == 'M'))

    //OPCION MOTO

    printf("Linea 2.\n");

  else if ((tipo_v == 'q') || (tipo_v == 'Q'))

    //OPCION QUAD

    printf("Linea 4.\n");

  else if ((tipo_v == 'a') || (tipo_v == 'A'))

    //OPCION AGRICOLA

    printf("Linea 1.\n");

  else

    printf("Tipo incorrecto o no soportado.\n");



    return 0;

}
