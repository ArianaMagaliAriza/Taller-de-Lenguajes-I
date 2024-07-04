#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{char s[255];
 int cont=0;

    printf("Ingrese una palabra:\n");
    scanf("%s",s);
    while (strcmp("ZZZ",s)){
        if(strlen(s)==5) cont++;
        printf("Ingrese una palabra:\n");
        scanf("%s",s);
    }
    printf("Cant de palabras de longitud 5: %d",cont);
    return 0;
}
