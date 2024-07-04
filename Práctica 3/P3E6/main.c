#include <stdio.h>
#include <stdlib.h>


int main()
{semana s;
 char *nomDia[]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};

    //imprimirSemana(s,nomDia);
    for(s=DOM;s<=SAB;s++){
        printf("%d: %s\n",s,nomDia[s]);}

    return 0;
}

