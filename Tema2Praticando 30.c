#include <stdio.h>

#include <time.h>

int main() {
  int idade = 20;
  char* resultado;

  resultado = (idade >= 18) ? "Você é maior de idade" : "Você é menor de idade";

  printf("Resultado: %s\n", resultado);

  return 0;
}