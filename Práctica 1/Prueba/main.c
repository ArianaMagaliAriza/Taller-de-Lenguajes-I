#include <stdio.h>
#include <stdlib.h>

int mayor(int,int,int);

int main()
{ int n,n2,n3;

    printf("Ingrese un num:\n");
    scanf("%d",&n);
    printf("Ingrese un num:\n");
    scanf("%d",&n2);
    printf("Ingrese un num:\n");
    scanf("%d",&n3);
    printf("El mayor num es %d", mayor(n,n2,n3));
    return 0;
}

int mayor(int n,int n2,int n3)
{ int max=n;

    if(n2>max) max=n2;
    if(n3>max) max=n3;

    return max;
}

