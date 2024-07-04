#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* arch;
    char palabra[30];
    arch=fopen("PRUEBA-17-10.TXT","r");

    if(arch==NULL){
        printf("Fallo en la apertura\n");
        fprintf(stdout,"No se pudo abrir el archivo\n");
    }
    else{
        fprintf(stdout,"Archivo abierto\n");
        printf("Todo OK\n");
    }

    fscanf(arch,"%s",palabra);
    while(!feof(arch)){
        fprintf(stdout,"%s \n",palabra);
        fscanf(arch,"%s",palabra);
    }
    //fprintf(arch,"Generando mi primer archivo en C\n");
    fclose(arch);
    return 0;
}
