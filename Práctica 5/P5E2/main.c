#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *f;
char c;
int may=0,min=0,dig=0;

    f = fopen("prueba.txt", "r");
    if (f == NULL){
        printf("No se pudo abrir el archivo\n");
        return 1;
    }
    c=fgetc(f);
    while(!feof(f)){
        if(c>='a'&& c<='z') min++;
        else if(c>='A'&& c<='Z') may++;
        else if(c>='0' && c<='9') dig++;
        c=fgetc(f);
    }
    fprintf(stdout,"Minusculas:%d \nMayusculas:%d \nDigitos:%d\n",min,may,dig);
    fclose(f);
    return 0;
}
