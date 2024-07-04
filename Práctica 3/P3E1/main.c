#include <stdio.h>
#include <stdlib.h>
#define cant 3

typedef struct rectangulo{
        float base;
        float altura;
    }rectangulo;

void cargarR(rectangulo *);
float calcularArea(rectangulo);

int main(){
rectangulo *p,*aux,r[cant];
int i,minR;
float minA;

    minA=99999;
    p=r;
    aux=p;//PARA NO PERDER EL PUNTERO
    for (i=0;i<cant;i++){
        cargarR(aux+i);
        printf("El area del rectangulo %d es %f\n",(i+1),calcularArea(p[i]));
        if((calcularArea(p[i]))<minA){
            minA=calcularArea(p[i]);
            minR=i;
        }
    }
    printf("\n\nEl rectangulo de menor area es el %d\n\n",(minR+1));


    return 0;
}

void cargarR(rectangulo* p){

    printf("\nIngrese una base:\n");
    scanf("%f",&p->base);
    printf("Ingrese una altura:\n");
    scanf("%f",&p->altura);
}

float calcularArea(rectangulo p){
float res;

    res=p.base*p.altura;

    return res;
}

