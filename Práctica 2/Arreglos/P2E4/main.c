#include <stdio.h>
#include <stdlib.h>
#define M 2
#define N 2
#include <time.h>

void copiarMatriz(int[M][N], int[M][N]);
void cargarMatriz(int[M][N]);
void transponerMatriz(int[M][N]);
void imprimirMatriz(int[M][N]);

int main()
{
    srand(time(NULL));
    int matrizA [M][N], c;

    cargarMatriz(matrizA);
    imprimirMatriz(matrizA);

    printf("----------------\n ");

    transponerMatriz(matrizA);
    imprimirMatriz(matrizA);
}

void copiarMatriz(int matriz[M][N], int matrizB[M][N]){
    int i, j;
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            matrizB[i][j]=matriz[i][j];
        }
    }
}

void cargarMatriz(int matriz[M][N]){
    int i, j;
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            matriz[i][j]=rand();
        }
    }
}

void transponerMatriz(int matriz[M][N]){
    int i, j, matrizB[M][N];
    copiarMatriz(matriz, matrizB);
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            matriz[i][j]=matrizB[j][i];
        }
    }
}

void imprimirMatriz(int matriz[M][N]){
    int i, j;
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
