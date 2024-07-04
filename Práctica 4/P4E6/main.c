#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int num;
    struct nodo* sig;
}nodo;

typedef nodo* lista;

void inicializar(lista*);
void eliminarElementos(lista*);
void agregarInicio(lista*,int);
void agregarFinal(lista*,int);
int calcularCantElem(lista*);
void imprimirElementos(lista*);

int main()
{lista l;
int n;
    inicializar(&l);
    printf("Ingrese un numero:\n");
    scanf("%d",&n);
    while(n!=999){
        agregarFinal(&l,n);
        printf("Ingrese un numero:\n");
        scanf("%d",&n);
    }
    printf("Ingrese un numero para agregar al inicio:\n");
    scanf("%d",&n);
    agregarInicio(&l,n);
    printf("La lista tiene %d elementos\n",calcularCantElem(&l));
    imprimirElementos(&l);
    eliminarElementos(&l);
    return 0;
}

void inicializar(lista* l){
   (*l)=NULL;
}
void eliminarElementos(lista* l){
lista aux;
    while((*l)!= NULL){
        aux=(*l);
        (*l)=(*l)->sig;
        free(aux);
        }
}
void agregarInicio(lista* l,int n){
lista aux;
    aux=(lista) malloc(sizeof(nodo));
    aux->num=n;
    aux->sig=(*l);
    (*l)=aux;
}

void agregarFinal(lista* l,int n){
lista act,aux=(*l);
   act=(lista) malloc(sizeof(nodo));
   act->num=n;
   act->sig=NULL;
   if ((*l) == NULL) (*l)->sig=act;
   else {
        while (aux->sig!=NULL)aux=aux->sig;
        aux->sig=act;
   }
}
int calcularCantElem(lista* l){
lista aux=(*l);
int cant=0;
  while(aux!=NULL){
    cant=cant+1;
    aux=aux->sig;
  }
  return cant;
}
void imprimirElementos(lista* l){
lista aux=(*l);
  while(aux!=NULL){
    printf("%d, ",aux->num);
    aux=aux->sig;
  }
}
