#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{char palabra[255];
int longP,i,j,cont;

    printf("Ingrese palabra:\n");
    scanf("%s",palabra);
    longP=strlen(palabra);

    for(i=0;i<longP;i++){
        cont=0;
        for(j=0;j<longP;j++){
            if(palabra[i]==palabra[j]) ++cont;

        }
        printf("La cant de veces que aparece la letra %c es %d\n",palabra[i],cont);
    }

    return 0;
}
