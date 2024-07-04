#include <stdio.h>
#include <stdlib.h>

int main()
{unsigned int semilla;
 int i;

    printf("Ingrese una numero(semilla):\n");
    scanf("%d",&semilla);
    srand(semilla);
    for(i=1;i<=15;i++) printf("%d \n",rand());

    return 0;
}
