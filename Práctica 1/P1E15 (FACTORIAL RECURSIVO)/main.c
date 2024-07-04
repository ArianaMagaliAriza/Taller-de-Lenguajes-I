#include <stdio.h>
#include <stdlib.h>

int factorialR(int);

int main()
{int n;

    printf("Ingrese un numero:\n");
    scanf("%d",&n);
    printf("%d! = %d",n, factorialR(n));
    return 0;
}

int factorialR(int n){

    if(n==0)
        n=1;
    else{
        n=n * factorialR(n-1);
        //printf("%d \n",n);
    }
    return n;
}
