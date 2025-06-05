#include <stdio.h>
 
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int numero) {
    if (numero > 0) {
        printf("%d ", numero);  // Imprime o valor atual de n
        recursiveLoop(numero - 1);  // Chama a si mesma com n - 1
    }
}
 
int main() {
    int quantidade = 10;
    
    printf("Contagem regressiva...");
    recursiveLoop(quantidade);
    return 0;
}