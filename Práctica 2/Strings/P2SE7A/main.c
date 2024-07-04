#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindroma(char*);

int main()
{char palabra[255];
 char *p=palabra;
    printf("Ingrese una palabra:\n");
    scanf("%s",palabra);
    //printf(" ");

    if (palindroma(p)==1)
        printf("Es palindroma\n");
    else
        printf("No es palindroma\n");
    return 0;
}

int palindroma(char *p){
int res=0,longP;

char *aux,*aux2;//PARA NO PERDER EL PUNTERO

    longP=strlen(p);

    aux=p;
    aux2=aux+(longP-1);
    while((*aux==*aux2)&&(*aux < longP/2 - 1)){
        aux++;
        aux2--;
    }

    if(*aux==*aux2)
        res=1;

    return res;
}

