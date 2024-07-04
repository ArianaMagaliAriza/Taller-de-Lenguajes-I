#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapStr(char*,char,char);

int main()
{char a,b,cadena[255];
 char *ptr=cadena;

    printf("Ingrese una cadena de caracteres:\n");
    scanf("%s",cadena);

    printf("Ingrese un caracter:\n");
    scanf(" %c",&a);

    printf("Ingrese un caracter:\n");
    scanf(" %c",&b);

    swapStr(ptr,a,b);
    printf("%s",cadena);
    return 0;
}

void swapStr(char *ptr,char a,char b){
    char *aux;

    aux=ptr;
    while(*aux != '\0'){
       if(*aux == a) *aux=b;
          aux++;
    }


}
