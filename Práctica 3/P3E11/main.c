#include <stdio.h>
#include <stdlib.h>

typedef struct{
    unsigned int hora: 6;
    unsigned int min: 6;
    unsigned int seg: 4;
}horario;

int main()
{horario h={10,45,12};
    printf("%u:%u:%u",h.hora,(h.min),h.seg);
    return 0;
}
