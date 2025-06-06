#include <stdio.h>

int main() {
  int temperatura = 10;
  char* estado;

  estado = (temperatura > 30) ? "Está Calor" : "Está Frio";

  printf("Estado: %s\n", estado);

  return 0;
}