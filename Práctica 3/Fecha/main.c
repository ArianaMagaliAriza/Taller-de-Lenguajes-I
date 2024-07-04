#include <stdio.h>
#include <stdlib.h>
typedef struct{
    unsigned int dia:5;
    unsigned int mes:5;
    unsigned int anio:14;
}Fecha;

Fecha asignar_fecha(unsigned int,unsigned int,unsigned int);

int main()
{Fecha f;
unsigned int d,m,a;

    scanf("%u",&d);
    scanf("%u",&m);
    scanf("%u",&a);
    f=asignar_fecha(d,m,a);

    return 0;
}

Fecha asignar_fecha(unsigned int d,unsigned int m,unsigned int a){
Fecha f;
    f.dia=d;
    f.mes=m;
    f.anio=a;
    printf("%u/%u/%u",f.dia,f.mes,f.anio);
    return f;
}
