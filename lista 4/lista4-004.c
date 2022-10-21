#include <stdio.h>
#define tam 5
int main(){
    int v[tam], x, *p = &x;
    for(int i=0;i<tam;i++){
        printf("Digite o valor da posição %d da lista: ",i);
        scanf("%d",p);
        v[i] = *p;
    }
    for(int i=0;i<tam;i++){
        printf("Endereço [%p] -> Valor [%d] \n",v+i,*(v+i));
    }
    ////percebe-se que no caso dos inteiros os endereços
    ///vão subindo de 4 em 4.
}
