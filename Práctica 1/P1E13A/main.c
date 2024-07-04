##include <stdio.h>
#include <stdlib.h>
int ver_primo (int);

int main()
{
    int n;
    printf("Ingrese un entero: ");
    scanf("%d",&n);

    if((ver_primo(n))==0)
        printf("el numero %d es primo!",n);
    else
        printf("el numero %d NO es primo",n);

    return 0;
}

int ver_primo(n){
    int cont=2, x=0;

    while(x==0 && cont<n){
        if(n % cont==0)
            x++;
        cont++;
    }
    return x;
}
