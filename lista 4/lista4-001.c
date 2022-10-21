#include <stdio.h>
int main(){
    int x = 0, y = 0, soma=0;
    int *p, *pont;
    puts("digite um número: ");
    scanf("%d", &x);
    puts("digite outro número ");
    scanf("%d", &y);
    p = &x;
    pont = &y;
    soma = *p + *pont;
    printf("valor da soma: %i \n", soma);
    printf("endereço da soma: %p", &soma);
    return 0;
}
