#include <stdio.h>
#include <stdlib.h>
#define dimf 50
#define cant 4

typedef enum {ACCION,COMEDIA,DRAMA,TERROR}generos;

typedef struct pelicula{
    char titulo[dimf];
    generos genero;
    int duracion;
}pelicula_t;

void cargar_pelicula(pelicula_t*);
float prom_duracion(pelicula_t [],int);

int main()
{pelicula_t p[cant];
 int i,c=cant;

    for(i=0;i<cant;i++){
        cargar_pelicula(&(p[i]));
    }
    printf("el promedio de duracion es %f\n",(prom_duracion(p,c)));
    return 0;
}

void cargar_pelicula(pelicula_t* p){
int aux;
   printf("Ingrese un titulo:\n");
   scanf("%s",p->titulo);
   printf("Ingrese un genero:\n");
   scanf("%d",&aux);
   p->genero=aux;
   printf("Ingrese una duracion:\n");
   scanf("%d",&(p->duracion));
}

float prom_duracion(pelicula_t p[cant],int c){
float aux=0;
int i;

    for(i=0;i<c;i++){
        aux=aux+p[i].duracion;
    }
    aux=aux/c;
    return aux;
}
