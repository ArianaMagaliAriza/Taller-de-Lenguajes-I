#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define cant 100

void analizar(char*,int*,int*);

int main()
{char *cadena;
 int i,minu,mayu;

    cadena= (char*) malloc(cant* sizeof(char));
    for(i=0;i<10;i++){
        printf("Ingrese una oracion:\n");
        gets(cadena);
        minu=0;
        mayu=0;
        analizar(cadena,&minu,&mayu);
    }
    return 0;
}

void analizar(char* c,int* minu,int* mayu){
int largo,i;
    largo=strlen(c);
    for(i=0;i<largo;i++){
        if(c[i]>='A'&& c[i]<='Z') *mayu=(*mayu)+1;
        else if (c[i]>='a'&& c[i]<='z') *minu=(*minu)+1;
    }
    printf("Tiene %d mayusculas y %d minusculas\n",*mayu,*minu);
}
