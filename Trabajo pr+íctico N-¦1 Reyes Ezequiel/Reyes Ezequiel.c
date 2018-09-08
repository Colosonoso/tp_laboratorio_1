#include <stdio.h>
#include <stdlib.h>
#include "Reyes Ezequiel.h"

float suma (float primeroperando,float segundooperando)
   {
     float resultadodelasuma;

     resultadodelasuma=primeroperando + segundooperando;

     return resultadodelasuma;
 }
float resta (float primeroperando,float segundooperando)
{

   float resultadodelaresta;

   resultadodelaresta=primeroperando - segundooperando;

   return resultadodelaresta;

}

float multiplicacion(float primeroperando,float segundooperando)

{

 float resultadodelamultiplicacion;

 resultadodelamultiplicacion=primeroperando * segundooperando;


 return resultadodelamultiplicacion;

}

float division(float primeroperando, float segundooperando)
{

   float resultadodeladivision;

  resultadodeladivision=primeroperando / segundooperando;
  return resultadodeladivision;

}

int factorialuno(int primeroperando)
{
  int i;
  int resultadodelfactorialprimeroperando=1;

  for(i=1; i<=primeroperando;i++)
     {
         resultadodelfactorialprimeroperando=resultadodelfactorialprimeroperando* i;
     }
    return resultadodelfactorialprimeroperando;
  }
int factorialdos(int segundooperando)
    {
      int i;
      int resultadodelfactorialsegundooperando=1;
  for(i=1; i<=segundooperando;i++)
     {
         resultadodelfactorialsegundooperando=resultadodelfactorialsegundooperando* i;
     }
      return resultadodelfactorialsegundooperando;
    }
