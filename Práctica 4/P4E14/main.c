#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** reservarMemoria(int);
void inicializarMatriz(int**,int);
void imprimirMatriz(int**,int);
void liberarMemoria(int**,int);

int main()
{int n, **m;
    printf("Ingrese el orden de la matriz triangular inferior:\n");
    scanf("%d",&n);
    m=reservarMemoria(n);
    inicializarMatriz(m,n);
    imprimirMatriz(m,n);
    liberarMemoria(m,n);
    return 0;
}

int** reservarMemoria(int n){
    int i,**m,cont=1;
    m=(int**) malloc(n*sizeof(int));//  RESERVO COLUMNAS
    for(i=0;i<n;i++){
        m[i]=(int*) malloc(cont*sizeof(int));//  RESERVO FILAS
        cont++;
    }
    return m;
}
void inicializarMatriz(int** m,int n){
int f,c,cont=1;
    srand(time(NULL));
    for(c=0;c<n;c++){
        for(f=0;f<cont;f++){
            m[c][f]=rand();
        }
        cont++;
   }
}
void imprimirMatriz(int** m,int n){
int f,c,cont=1;
    for(c=0;c<n;c++){
        for(f=0;f<cont;f++){
            printf("%d ",m[c][f]);
        }
        printf("\n");
        cont++;
   }
}
void liberarMemoria(int** m, int n){
int f;

    for(f=0;f<n;f++)free(m[f]);// LIBERO CADA FILA
    free(m);// LIBERO LAS COLUMNAS
   }
