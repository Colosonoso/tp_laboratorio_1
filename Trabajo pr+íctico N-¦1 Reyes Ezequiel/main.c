#include <stdio.h>
#include <stdlib.h>
#include "Reyes Ezequiel.h"
int main()
{
    float numerouno;
    float numerodos;
    float sumar;
    float restar;
    float multiplicar;
    float dividir;
    int flagnumero1=0;
    int flagnumero2=0;
    int factorialnumerouno;
    int factorialnumerodos;
    int opcion;
    char seguir='s';


    while(seguir=='s')
    {

      printf("1- Ingrese el primer operando\n");
      printf("2- Ingrese el segundo operando\n");
      printf("3- Calcular las operaciones\n");
      printf("a. Calcular la suma de ambos numeros\n");
      printf("b. Calcular la resta de ambos numeros\n");
      printf("c. Calcular la division de ambos numeros\n");
      printf("d. Calcular la multiplicacion de ambos numeros\n");
      printf("4- Los resultados son: \n");
      printf("5-Salir\n");
      scanf("%d", &opcion);

      switch(opcion)
      {
      case 1:
      printf(" Ingrese el primer operando ");
      scanf("%f", &numerouno);
      flagnumero1=1;
      system("pause");
      break;

      case 2:
      printf(" Ingrese el segundo operando ");
      scanf("%f", &numerodos);
      flagnumero2=1;
      system("pause");
      break;


      case 3:

      if(flagnumero1==1 && flagnumero2==1)
      {

      sumar=suma(numerouno,numerodos);
      restar=resta(numerouno,numerodos);
      multiplicar=multiplicacion(numerouno,numerodos);
      dividir=division(numerouno,numerodos);
      factorialnumerouno=factorialuno(numerouno);
      factorialnumerodos=factorialdos(numerodos);
      system("pause");

      printf("Calculando la operacion\n");
     }

      else
        {
          printf("Error. Se ha ingresado algo que no es un numero, debe ingresar un numero\n");
        }
        system("pause");
        break;

      case 4:

       if(flagnumero1==1 && flagnumero2==1)
         {
          printf("La suma entre el numerouno y el numerodos es %f\n",sumar);
          printf("La resta entre el numerouno y el numerodos es %f\n",restar);

          if(numerodos==0)
            {
              printf("Error.El numerodos tiene que ser distinto de 0, no se puede dividir por 0.Reingrese\n");
            }

           else
             {
                printf("El resultado de la division entre el numerouno y el numerodos es %f\n", dividir);
             }
           printf("El resultado de la multiplicacion entre el numerouno y el numerodos es %f\n",multiplicar);


           if(numerouno<0 && numerodos<0)
            {
            printf("Error.El factorial de un numero que este en negativo no existe. Reingrese de nuevo\n");
            }

           else
           {
            printf("El resultado del factorial del primer numero es %d\n",factorialnumerouno);
            printf("El resultado del factorial del segundo numero es %d\n",factorialnumerodos);
           }
         system("pause");
         break;
         }
      case 5:
      seguir= 'n';
      break;

      default:

      printf("Error.Reingrese una opcion del 1 hasta el 5\n");

      }


    }
     return 0;
}

