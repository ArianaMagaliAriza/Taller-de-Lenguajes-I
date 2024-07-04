#include <stdio.h>
#include <stdlib.h>

typedef enum{CIRCULO=0,TR,CUADRADO}Figuras;

typedef struct{
    float radio;
}Circulo;

typedef struct{

    float base;
    float altura;
}TrianguloR;

typedef struct{

    float lado;
}Cuadrado;

typedef union{
    Circulo circulo;
    TrianguloR trianguloR;
    Cuadrado cuadrado;
}Ufiguras;

typedef struct{
    Figuras tipo;
    Ufiguras datos;
    char color[20];
}Figura;

void cargarFigura(Figura*);
void imprimirFigura(Figura);

int main(){
    Figura f;

    cargarFigura(&f);
    imprimirFigura(f);
    return 0;
}

void cargarFigura(Figura* f){
    int aux;

    printf("ingrese el tipo de figura: ");
    scanf("%u",&(f->tipo));
    aux=f->tipo;
    printf("ingrese el color de la figura: ");
    scanf("%s",f->color);

    switch(aux){
        case CIRCULO:
            printf("ingrese el radio: \n");
            scanf("%f", &f->datos.circulo.radio);
            break;
        case TR:
            printf("ingrese base: \n");
            scanf("%f", &f->datos.trianguloR.base);
            printf("ingrese altura: \n");
            scanf("%f", &f->datos.trianguloR.altura);
            break;
        case CUADRADO:
            printf("ingrese el lado: \n");
            scanf("%f", &f->datos.cuadrado.lado);
            break;
    }
}

void imprimirFigura(Figura f){
int aux;
    aux=f.tipo;

    switch(aux){
    case CIRCULO:
            printf("Circulo - %s - %f\n",f.color,((f.datos.circulo.radio*f.datos.circulo.radio)* 3.14));
            break;
        case TR:
            printf("Triangulo Rectangulo - %s - %f \n",f.color,((f.datos.trianguloR.altura * f.datos.trianguloR.base)/2));
            break;
        case CUADRADO:
            printf("Cuadrado - %s - %f \n",f.color,((f.datos.cuadrado.lado)*4));
            break;
    }

}

