#include <stdio.h>
#include <stdlib.h>
#include <imath.h>

int main(int argc,char*argv[])
{int  x,y,fin=0;
float res;
char op;
        op=*argv[3];
        x=atoi(argv[1]);
        y=atoi(argv[2]);

        switch(op){
            case '+': res=x+y; break;
            case '.': res=x*y; break;
            case '/': res=(float)x/y; break;
            case '-': res=x-y; break;
            default: fin=1; break;
            }

        if(fin==0)
            printf("El resultado es  %.2f\n", res);
        else
            printf("El operador no es reconocido\n");


    return 0;
}
