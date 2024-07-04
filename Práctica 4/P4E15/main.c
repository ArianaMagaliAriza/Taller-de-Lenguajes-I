#include <stdio.h>
#include <stdlib.h>

int** cargarPiramide(int);
void inicializarPiramide(int**,int);
void imprimir(int**,int);
void destruirPiramide(int**,int);

int main()
{int n,**m;

    printf("Ingrese un numero de filas:\n");
    scanf("%d",&n);
    m=cargarPiramide(n);
    inicializarPiramide(m,n);
    imprimir(m,n);
    destruirPiramide(m,n);
    return 0;
}

int** cargarPiramide(int n){
int **m,i,cont=1;
    m=(**int) malloc(n*sizeof(int));// CARGAR COLUMNAS("FILAS")
    for(i=0;i<n;i++){
        m[i]=(*int) malloc(cont*sizeof(int));// CARGAR FILAS DENTRO DE CADA "FILA"
        }
        cont++;
    }
    return m;
}

void inicializarPiramide(int**m,int n){
int i,j,cont=1;
  for(i=0;i<n;i++){
    for(j=0;j<cont;j++){
        if(j==0 || j==cont-1) m[i][j]=1;
        else m[i][j]=(m[i-1][j-1])+(m[i-1][j]);
    }
    cont++;
  }
}
void imprimir(int** m,int n){
int i,j,cont=1;
  for(i=0;i<n;i++){
    for(j=0;j<cont;j++){
        printf("%d \t",m[i][j]);
    }
    printf("\n");
    cont++;
  }
}
void destruirPiramide(int** m,int n){

    for(i=0;i<n;i++) free(m[i]);
        free(m);
}
