#include <stdio.h>
#define TAM 3

struct aluno{
    float nota1;
    float nota2;
    float media;
};

float calMedia(struct aluno *, int);

int main()
{
    struct aluno alunos[TAM];   
    
    for(int i = 0; i < 3; i++){
      printf("Primeira nota do %dº aluno:", i+1);
      scanf("%f", &(alunos+i)->nota1);
      
      printf("Segunda nota do %dº aluno:", i+1);
      scanf("%f", &(alunos+i)->nota2);
    }
    
    printf("A media dos alunos é de: %.2f", calMedia(alunos, TAM));
    

    return 0;
}

float calMedia(struct aluno *v, int tamanho){
  float soma = 0;
  for(int j = 0; j < tamanho; j++){
    soma += ((v + i)->nota1 + (v + i)->nota2)/2;
  }
  return (soma/tamanho);
}
