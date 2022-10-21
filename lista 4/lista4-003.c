#include <stdio.h>

int main()
{
    int x,m;
    int *menor;
    puts("digite um número: ");
    scanf("%d", &x);
    x = m;
    while(x!=0){
        puts("----- QUANDO QUISER SAIR DIGITE 0 -----");
        puts("digite um número");
        scanf("%d", &x);
        if(x<m){
            m=x;
            menor = &m;
            printf("o menor é %d\n", *menor);
            
        }else{
            menor = &m;
            printf("o menor é: %d\n", *menor);
        }
    }

    return 0;
}
