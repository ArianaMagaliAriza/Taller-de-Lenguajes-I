#include <stdio.h>
#include <stdlib.h>
int ver_primo (int);

int main()
{
    int n,primos=0;

    while(primos<5){
        printf("Ingrese un entero: ");
        scanf("%d",&n);

        if((ver_primo(n))==0)
            primos++;
    }

    printf("se cargaron 5 numeros primos \n");

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
