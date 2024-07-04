#include <stdio.h>
#include <stdlib.h>


int main(){
int a=1,b=2,c=4;
int *p1=&a,*p2=&c;

    *p1=(*p2)++;
    p2=&b;
    *p1+=*p2;
    p1=p2;
    ++*p1;
    p1=&a;
    *p2*=*p1;
    c=*p2+*p1;
    a=*p1=++*p2;
    printf("a=%d b=%d c=%d p1=%d p2=%d\n",a,b,c,*p1,*p2);

    return 0;
}

