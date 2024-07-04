#include <stdio.h>
#include <stdlib.h>

void mayor(int,float*,float*);

int main()
{ int n;
  float max, min;

    min= 99999;
    max= -1;
    printf("Ingrese un num:\n");
    scanf("%d",&n);
    mayor(n,&max,&min);

    return 0;
}

void mayor(int n, float*max,float*min)
{ float aux;
  int i;

    for(i=n;i>=1;i--){
        printf("Ingrese un num (%d):\n",i);
        scanf("%f",&aux);
        if(aux<*min) *min=aux;
        if(aux>*max) *max=aux;
    }
    printf("El max num es %f",*max);
    printf("El min num es %f",*min);
}
