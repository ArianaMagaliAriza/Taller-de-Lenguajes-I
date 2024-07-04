#include <stdio.h>
#include <stdlib.h>
#define cant 20
#define texto 40

typedef struct{
    char nomApe[texto];
    int edad;
    int cantT;
    int rank;
    float fortuna;
}jugador;

jugador leerJugador();
void mejorRank(FILE *,char*);
void maxTitulos(FILE *,char*);

int main()
{FILE* f;
jugador v[cant];
int i;
char aux[texto];

    for(i=0;0<cant;i++)
        v[i]=leerJugador();
    f=fopen("jugadores.dat","wb+");
    if(f==NULL){
        printf("No se pudo abrir el archivo\n");
        return 1;
    }

    fwrite(v,sizeof(jugador),cant,f);
    mejorRank(f,aux);
    printf("El jugador con mejor ranking es %s",aux);
    maxTitulos(f,aux);
    printf("El jugador con mas titulos es %s",aux);

    fclose(f);
    return 0;
}

jugador leerJugador(){
jugador j;

    printf("Ingrese nombre y apellido:\n");
    gets(j.nomApe);
    printf("Ingrese edad:\n");
    scanf("%d",&j.edad);
    printf("Ingrese cantidad de titulos:\n");
    scanf("%d",&j.cantT);
    printf("Ingrese ranking:\n");
    scanf("%d",&j.rank);
    printf("Ingrese fortuna:\n");
    scanf("%f",&j.fortuna);
    return j;
}
void mejorRank(FILE* f,char* n){
jugador v[cant];
int max=9999,i;

    fread(v,sizeof(jugador),cant,f);
    for(i=0;i<cant;i++){
        if(v[i].rank<max)
            n=v[i].nomApe;
    }
}

void maxTitulos(FILE* f,char* n){
jugador v[cant];
int max=-1,i;

    fread(v,sizeof(jugador),cant,f);
    for(i=0;i<cant;i++){
        if(v[i].cantT>max)
            n=v[i].nomApe;
    }
}
