#include <stdio.h>
#include <stdlib.h>
#define prom(a,b,c,d) (((a)+(b)+(c)+(d))/4)
int main(int argc,char* argv[])
{float n,n2,n3,n4;
    n=atof(argv[1]);
    n2=atof(argv[2]);
    n3=atof(argv[3]);
    n4=atof(argv[4]);
    printf("Numeros: %.2f, %.2f, %.2f, %.2f\n",n,n2,n3,n4);
    printf("Promedio: %.2f\n",prom(n,n2,n3,n4));
    return 0;
}
