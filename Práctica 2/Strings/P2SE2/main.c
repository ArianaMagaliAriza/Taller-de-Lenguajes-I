#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int finChar(char[]);

int main()
{char s[255];
 int cant_O=0;

    printf("Ingrese una palabra:\n");
    scanf("%s",s);
    while(strcmp("ZZZ",s)){
        if (finChar(s))cant_O++;
        printf("Ingrese una palabra:\n");
        scanf("%s",s);
    }
    printf("cant de palabras terminadas en o: %d",cant_O);

    return 0;
}

int finChar(char s[]){
    int result=0;
    int longitud=strlen(s);
    if (s[longitud-1]=='o')
        result=1;//1 es verdadero

    return result;
}
