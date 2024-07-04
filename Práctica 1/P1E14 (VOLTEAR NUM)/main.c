#include <stdio.h>
#include <stdlib.h>
int voltearNum(int);

int main()
{int num;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);
    printf("Resultado: %d",voltearNum(num));
    return 0;
}

int voltearNum(int num){
int aux;
    while(num!=0){
        aux+=(num%10);
        if(num>10) aux*=10;
        num/=10;
        //printf("%d \n",aux);
    }
    return aux;
}
