#include <stdio.h>
#include <stdlib.h>
#define  N 2


typedef struct empleado{
        char nom[50];
        int edad;
}empleado;

void leerEmp(empleado[N]);

int main()
{   empleado e[N];
    int i;

    leerEmp(e);
    for(i=0;i<N;i++){
            if(e[i].edad>21)
                printf("nombre:%s\n",e[i].nom);
    }
    return 0;
}


void leerEmp(empleado e[N]){
int i;

    for(i=0;i<N;i++){
        printf("Ingrese un nombre:\n");
        scanf("%s",e[i].nom);//(e+1)->nom
        printf("Ingrese una edad:\n");
        scanf("%d",&(e[i].edad));
        printf("lo que ocupa la estructura:\n");
        printf("%d\n",sizeof(e[i]));//en bytes;;tiene un problema de redondeo
    }

}

