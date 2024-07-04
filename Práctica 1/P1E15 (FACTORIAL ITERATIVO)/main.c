#include <stdio.h>
#include <stdlib.h>
int factorialI(int);

int main()
{int n;

    printf("Ingrese un numero:\n");
    scanf("%d",&n);
    printf("%d! = %d",n, factorialI(n));
    return 0;
}

int factorialI(int n)
{int aux,i;
    aux=1;
    for(i=n;i>1;i--) {
        aux*=i;
        //printf("%d \n",aux);
    }

    return aux;
}
