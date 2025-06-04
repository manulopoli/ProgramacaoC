#include <stdio.h>

int main() {
  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: \n");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <= 65) {
    if (renda < 3000) {
      if (dependentes >= 2) {
        printf("Você atende todos os critérios!\n");
      } else {
        printf("Você não ao atende ao critério nº de dependentes!\n");
      }
    } else {
      printf("Você não atende aos critérios devido à renda!\n");
    }
  } else {
    printf("Você não atende aos critérios devido à idade!\n");
  }

  return 0;
}
