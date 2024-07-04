#include <stdio.h>
#include <stdlib.h>
#define cant 3
int main()
{FILE *f,*f2;
int v[cant];
int n,i;
    f=fopen("numeros.txt","w+");
    f2=fopen("numeros.dat","wb+");
    if(f==NULL || f2==NULL){
        printf("No se pudo abrir alguno o ambos archivos\n");
        return 1;
    }
    for(i=0;i<cant;i++){
        printf("Ingrese un numero de 1 cifra(0 a 9):\n");
        scanf("%d",&n);
        fprintf(f,"%d\n",n);
        fwrite(&n,sizeof(int),1,f2);

    }

    //v=fwrite(v,sizeof(int),cant,f2);
    fprintf(stdout,"Archivo de texto:\n");
    fseek(f,0,SEEK_SET);
    fscanf(f,"%d",&n);
    fprintf(stdout,"%d\n",n);
    while(!feof(f)){
        fprintf(stdout,"%d\n",n);
        fscanf(f,"%d",&n);}
    fprintf(stdout,"Archivo binario:\n");
    fseek(f2,(0),SEEK_SET);
    fread(v,sizeof(int),3,f2);
    for(i=0;i<cant;i++)
        printf("%d\n",v[i]);
    fclose(f);
    fclose(f2);
    return 0;
}
