#include <stdio.h>

int main() {
    //Se a idade for 18 ou mais, o programa imprime 'Você é maior de idade'
    //No nosso exemplo, 20 é maior que 18, então a mensagem será exibida*

    int idade = 18;
    
    if(idade >= 20) {

        printf("Você é maior de idade\n");
        printf("Dentro IF\n");

    }
        printf("Fora IF");
    

    return 0;
}