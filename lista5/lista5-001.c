#include <stdio.h>
struct medias{
    float n1;
    float n2;
    float media;
};
int main(){
    struct medias est;
    puts("digite a nota a primeira nota: ");
    scanf("%f", &est.n1);
    puts("digite a segunda nota: ");
    scanf("%f", &est.n2);
    est.media=(est.n1+est.n2)/2;
    printf("a média é: %.2f", est.media);
    
    return 0;
}
