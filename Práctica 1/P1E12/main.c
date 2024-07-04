#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{int i;

   for(i=1;i<=10;i++){
      printf("raiz cuadrada de %d %f\n",i,((float)sqrt(i)));
      printf("%d al cuadrado= %d\n",i, ((int)pow(i,2)));
      printf("%d al cubo= %d\n",i, ((int)pow(i,3)));
   }

    return 0;
}
