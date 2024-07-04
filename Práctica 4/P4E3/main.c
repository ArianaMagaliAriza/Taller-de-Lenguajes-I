#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* reservarMemoria(int);
int* inicializarVector(int);

int main()
{int n,*p;
    printf("Ingrese un entero:\n");
    scanf("%d",&n);
    p=reservarMemoria(n);
    p=inicializarVector(n);
    free(p);
    return 0;
}
int* reservarMemoria(int n){
int *p;
  p=(int*) malloc(n*sizeof(int));
    return p;
}
int* inicializarVector(int n){
int i,max,*p;
    max=-1;
    srand(time(NULL));
    for(i=0;i<n;i++){
        p[i]=rand();
        if (p[i]>max) max=p[i];
        printf("[%d] ",p[i]);
    }
    printf("\nEl maximo numero es %d",max);
    return p;
}
