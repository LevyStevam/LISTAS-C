#include <stdio.h>

int main()
{
    float nums[15];
    float maior =0, menor, x;
    for(int I=0;I<15;I++){
        puts("digite um número: ");
        scanf("%f", &nums[I]);
        if(I == 0){
            maior = nums[I];
            menor = nums[I];
        }
        else{
            nums[I]>maior ? maior = nums[I]: maior;
            nums[I]<menor ? menor = nums[I]: menor;
        }
        
    }
    printf("o valor do maior + o menor é: %.2f ", maior + menor);

    return 0;
}
