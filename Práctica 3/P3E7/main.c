#include <stdio.h>
#include <stdlib.h>
#define cant 4

typedef struct alumno{
    char nombre[50];
    int legajo;
    int tipo;
    union identificacion{
          int dni;
          char pasaporte[25];
    }ident;
}alumno;

int main(){
    alumno a[cant];
    int i;

    for(i=0;i<cant;i++){
        printf("Ingrese un nombre:\n");
        scanf("%s",a[i].nombre);
        printf("Ingrese un legajo:\n");
        scanf("%d",&(a[i].legajo));
        printf("Ingrese si el alumno es Argentino (1) o Extranjero (0):\n");
        scanf("%d",&(a[i].tipo));
        if(a[i].tipo){
                printf("Ingrese el dni:\n");
                scanf("%d",&(a[i].ident.dni));
        }
        else{
            printf("Ingrese el pasaporte:\n");
            scanf("%s",a[i].ident.pasaporte);
        }
    }
    return 0;

}
