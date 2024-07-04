#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    char op;
    scanf("%d\n",&x);
    scanf("%d\n",&y);
    scanf("%c",&op);
    switch(op){
        case '+' : printf("%d %c %d = %d\n",x,op,y,(x+y));break;
        case '-' : printf("%d %c %d = %d\n",x,op,y,(x-y));break;
        case '*' : printf("%d %c %d = %d\n",x,op,y,(x*y));break;
        case '/' : printf("%d %c %d = %d\n",x,op,y,(x/y));break;
        case '%' : printf("%d %c %d = %d\n",x,op,y,(x%y));break;
        default: printf("El operador ingresado no es correcto\n");
        }
    return 0;
}
