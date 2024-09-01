/* Alfonso Francisco De Abiega L'Eglisse
Programa pares de 0 a 100*/
#include <stdio.h>
#include <math.h>

int i, temp;

int main ()
{
  printf ("Los numeros pares entre 0 y 100 son:  ");
  
  for (i = 0; i <=100; i++)
  {
    if (i % 2 == 0)
    {
        printf(" %d ", i);
    }
  }

  printf("\n");
  return 0;
}
