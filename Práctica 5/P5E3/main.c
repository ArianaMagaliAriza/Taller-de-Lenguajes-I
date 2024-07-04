#include <stdio.h>
#include <stdlib.h>

int main()
{FILE *f;
int max=-1,num;
    f=fopen("precipitaciones.txt","r");
    if(f==NULL){
        printf("No se pudo abrir el archivo\n");
        return 1;
    }

    fscanf(f,"%d-",&num);
    while(!feof(f)){
        if (num>max) max=num;
        fscanf(f,"%d-",&num);
    }
    printf("max: %d\n",max);
    fclose(f);
    return 0;
}
