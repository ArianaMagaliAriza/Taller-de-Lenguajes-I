#include <stdio.h>
#include <stdlib.h>

int main()
{  float num, res;
   printf("Escriba una distancia en Km:\n");
   scanf("%f",&num);
   res=num/1.61;
   printf("%f Km es %f:\n",num,res);
   return 0;
}
