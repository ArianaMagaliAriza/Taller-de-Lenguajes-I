#include <stdio.h>
#include <stdlib.h>

int main()
{FILE *f;
int c;
float total=0,monto;
    f=fopen("apuestas.txt","r");
    if(f==NULL){
        printf("No se pudo abrir el archivo\n");
        return 1;
    }
    fscanf(f,"%d|%f;",&c,&monto);
    while(!feof(f)){
        total=total+monto;
        fscanf(f,"%d|%f;",&c,&monto);
    }
    fprintf(stdout,"EL MONTO TOTAL APOSTADO ES $%3.f",total);
    return 0;
}
