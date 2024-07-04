#include <stdio.h>
#include <stdlib.h>

typedef enum {DOM=1,LUN,MAR,MIE,JUE,VIE,SAB} semana;

void imprimirSemana(semana,char* []);

int main()
{semana s=DOM;
 char *nomDia[]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};

    imprimirSemana(s,nomDia);
    //for(s=DOM;s<=SAB;s++){
      //  printf("%d: %s\n",s,nomDia[s]);}

    return 0;
}

void imprimirSemana(semana s,char* nomDia[]){

  for(s=DOM;s<=SAB;s++){
        printf("%d %s\n",s,nomDia[s]);
  }

}
