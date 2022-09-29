#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[20];
    char x;
    int vezes = 0;
    puts("digite um caracter: ");
    scanf("%c",&x);
    puts("digite uma palavra: ");
    scanf("%s", palavra);
    for (int i=0; i<=strlen(palavra); i++){
        palavra[i] == x ? vezes += 1: vezes;
    };
    printf("repetida: %d", vezes);

    return 0;
}
