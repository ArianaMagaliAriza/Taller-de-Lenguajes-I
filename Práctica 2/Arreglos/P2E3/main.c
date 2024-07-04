#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 5
#include <time.h>

void cargarMatriz(int[M][N]);
void multiplicarMatriz(int[M][N], int);
void imprimirMatriz(int[][N]);

int main()
{
    srand(time(NULL));
    int matrizA [M][N], c;

    cargarMatriz(matrizA);
    imprimirMatriz(matrizA);

    printf("Ingrese un numero para multiplicar a la matriz: ");
    scanf("%d", &c);
    multiplicarMatriz(matrizA, c);
    imprimirMatriz(matrizA);
}
void cargarMatriz(int matriz[M][N]){
    int i, j;
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            matriz[i][j]=rand();
        }
    }
}

void multiplicarMatriz(int matriz[M][N], int c){
    int i, j;
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            matriz[i][j]=matriz[i][j]*c;
        }
    }
}

void imprimirMatriz(int matriz[][N]){
    int i, j;
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
