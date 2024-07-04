#include <stdio.h>
#include <stdlib.h>

int main(){

    char a, b;
    printf("Ingrese el primer caracter:\n");
    scanf("%c", &a);
    printf("Se leyó el caracter: %c\n", a);
    printf("Ingrese el segundo caracter:\n");
//    fflush(stdin);
    scanf(" %c", &b);
    printf("Se leyó el caracter: %c\n", b);
    return 0;
}
