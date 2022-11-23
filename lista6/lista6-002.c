#include <stdio.h>
struct estoques{
    char str[50];
    int numpeca;
    float preco;
    int numpedido;
    
};
int main(){
    struct estoques itens;
    puts("digite o nome da peça: ");
    fgets(itens.str,50,stdin);
    puts("digite o número da peça: ");
    scanf("%d", &itens.numpeca);
    puts("digite o preço da peça: ");
    scanf("%f", &itens.preco);
    puts("digite o numero do pedido: ");
    scanf("%d",&itens.numpedido);
    printf("------- \n");
    printf("o nome da peça é: %s \n o número da peça é: %d \n o preço da peça é: %.3f \n o número do pedido é: %d \n",itens.str,itens.numpeca,itens.preco,itens.numpedido);
    printf("------- ");
    return 0;
}
