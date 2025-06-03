#include <stdio.h>

int main(){
/*
Incremento (++)
Pré-Incremento ++a
Pós-Incremento a++
Decremento (--)
Pré-Decremento --a
Pós-Decremento a--
*/

int numero1 = 1, resultado;

printf("Antes Incremento: %d\n", numero1);
//numero1 + numero1 + 1;
//numero1 +=1;
//Pos incremento;
//resultado - numero1;
//numero++;

resultado = numero1++;
//printf("Apos Incremento: %d\n", numero1, );
printf("Apos Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

resultado = ++numero1;
printf("Apos Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

resultado = numero1--;
printf("Apos Pos-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

resultado = --numero1;
printf("Apos Pré-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);


}