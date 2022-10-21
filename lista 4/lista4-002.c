#include <stdio.h>
int main(){
    int x, y;
    int *p = &x, *pont = &y;
    puts("digite o número x : ");
    scanf("%d", &x);
    puts("digite outro número y: ");
    scanf("%d", &y);
    *p = *p ^ *pont;
    *pont = *p ^ *pont;
    *p = *p ^ *pont;
    printf("novo valor de x:%i novo valor de y:%i ", *p, *pont);
    return 0;
}
