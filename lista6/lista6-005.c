#include <stdio.h>
#include <string.h>

struct cadeira{
  char nome[50];
  struct docente* docenteacadeira;
};
struct docente{
  char nome[50];
};

int main(){
  struct docente andre;
  struct cadeira lab;

  strcpy(andre.nome, "andre");
  
  strcpy(lab.nome, "Laboratorio de Programacao");
  lab.docenteacadeira = &andre;
  
  printf("quem ministra a cadeira %s tem o nome de %s. \n", lab.nome,lab.docenteacadeira->nome);

  return 0;
}
