#include <stdio.h>
#include <stdlib.h>

int main()
{const int dimf=10;
 int vector[dimf];
 int i, cantp,canti;

    cantp=0; canti=0;
    srand(rand());
    for(i=0;i<dimf;i++) {
            vector[i]=rand();
            printf("v[%d] = %d\n",i,vector[i]);
            if(((vector[i]%2)==0) & ((i%2)!=0)) cantp++;
            else if (((vector[i]%2)!=0) & ((i%2)==0)) canti++;
    }
    printf("cant num pares en pos impar %d\n",cantp);
    printf("cant num impares en pos par %d\n",canti);
    return 0;
}
