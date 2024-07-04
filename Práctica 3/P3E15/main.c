#include <stdio.h>
#include <stdlib.h>


typedef enum{CIRCULO, ELIPSE, TRIANGULO, CUADRADO, RECTANGULO}Figuras;

typedef struct{
    float radio;
}Circulo;

typedef struct{
    float ejeMenor;
    float ejeMayor;//no necesito la orientación, sinó tmb lo necesitaría en el resto
}Elipse;

typedef struct{
    float base;
    float altura;
}Triangulo;

typedef struct{
    float lado;
}Cuadrado;

typedef struct{
    float lado1;
    float lado2;
}Rectangulo;// las figuaras en lugar de ser struct podrían ser vectores

typedef union{
    Circulo ciruculo;
    Elipse elipse;
    Triangulo triangulo;
    Cuadrado cuadrado;
    Rectangulo rectangulo;
}Ufigura;

typedef struct{
    Figuras tipo;
    Ufigura figura;
}Sfigura;

void cargarDatos(Sfigura*);
float calcularArea(Sfigura);

int main(){
    int i;
    Sfigura estructuraFigura;

    printf(" circulo: %d \n elipse: %d \n triangulo: %d \n cuadrado: %d \n rectangulo: %d \n", CIRCULO, ELIPSE, TRIANGULO, CUADRADO, RECTANGULO);
    printf("ingrese el tipo de figura: ");
    scanf("%d", &estructuraFigura.tipo);
    cargarDatos(&estructuraFigura);
    printf("el area de la figuara es de: %.4f \n", calcularArea(estructuraFigura) );

    return 0;
}

void cargarDatos(Sfigura *estructuraFigura){
    int aux;
    aux=estructuraFigura->tipo;

    switch(aux){//switch solo acepta int
    //para hacer una potencia de 2 puedo hacer: int x; x <<=1; //solo para enteros!!!
        case CIRCULO:
            printf("ingrese el radio: \n");
            scanf("%f", &estructuraFigura->figura.ciruculo.radio);
            break;
        case ELIPSE:
            printf("ingrese eje menor: \n");
            scanf("%f", &estructuraFigura->figura.elipse.ejeMenor);
            printf("ingrese eje mayor: \n");
            scanf("%f", &estructuraFigura->figura.elipse.ejeMayor);
            break;
        case TRIANGULO:
            printf("ingerse base: \n");
            scanf("%f", &estructuraFigura->figura.triangulo.base);
            printf("ingerse altura: \n");
            scanf("%f", &estructuraFigura->figura.triangulo.altura);
            break;
        case CUADRADO:
            printf("ingrese el lado: \n");
            scanf("%f", &estructuraFigura->figura.cuadrado.lado);
            break;
        case RECTANGULO:
            printf("ingrese lado 1: \n");
            scanf("%f", &estructuraFigura->figura.rectangulo.lado1);
            printf("ingrese lado 2: \n");
            scanf("%f", &estructuraFigura->figura.rectangulo.lado2);
            break;

        //no pongo default para que sea más legible
    }
}

float calcularArea(Sfigura estructuraFigura){
    float area;
    int aux;
    aux=estructuraFigura.tipo;

    switch(aux){//switch solo acepta int
    //para hacer una potencia de 2 puedo hacer: int x; x <<=1; //solo para enteros!!!
        case CIRCULO: area= estructuraFigura.figura.ciruculo.radio * estructuraFigura.figura.ciruculo.radio * 3.1416; break;
        case ELIPSE: area= estructuraFigura.figura.elipse.ejeMayor * estructuraFigura.figura.elipse.ejeMenor * 3.1416; break;
        case TRIANGULO: area = estructuraFigura.figura.triangulo.altura * estructuraFigura.figura.triangulo.base; break;
        case CUADRADO: area= estructuraFigura.figura.cuadrado.lado * estructuraFigura.figura.cuadrado.lado; break;
        case RECTANGULO: area= estructuraFigura.figura.rectangulo.lado1 * estructuraFigura.figura.rectangulo.lado2; break;

        //no pongo default para que sea más legible
    }

    return area;
}
