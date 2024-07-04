#include <stdio.h>
#include <stdlib.h>
#define DIMF 5

void swap(int*, int*);
int main()
{
    int vector[DIMF];
    vector[0]=10;
    vector[1]=20;
    vector[2]=30;
    vector[3]=40;
    vector[4]=50;

    int k=DIMF-1;
    for(int j=0; j<=k; j++){
        swap(&vector[j],&vector[k]);
        k--;
    }

    for(int i=0; i<DIMF; i++){
        printf("%d \n", vector[i]);
    }

    return 0;
}
void swap(int * pa, int * pb)
{
    int aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}
