#include <stdio.h>
#include <time.h>
struct node{
    int *pv;
    int tam;
    float media;
};
int preencher(int *v, int tam);
int imprimir(int *v, int tam);
float media(int *p, int tam);
int main(){
    struct node vet;
    puts("digite o tamanho do vetor");
    scanf("%d", &vet.tam);
    vet.pv = malloc(vet.tam * __SIZEOF_INT__);
    preencher(vet.pv, vet.tam);
    imprimir(vet.pv, vet.tam);
    vet.media = media(vet.pv,vet.tam);
    printf("%.2f",vet.media);
}
int preencher(int *v, int tam){
    srand(time(NULL));
    for(int i = 0; i<tam; i++){
        *(v+i) = rand() %100;
    }
}
int imprimir(int *v, int tam){
    for(int i = 0; i<tam; i++){
        printf("%d \n", *(v+i));
    }
}
float media(int *p, int tam){
    float soma =0;
    for(int i=0;i<tam;i++){
        soma += *(p + i);
    }
    return soma/tam;
}
