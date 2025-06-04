#include <stdio.h>

int main() {
    int idadeManu;
    int idadePaula;

    printf("Digite a idade da Manu:");
    scanf ("%d", &idadeManu);
    printf("Digite a idade da Paula:");
    scanf ("%d", &idadePaula);


    if (idadeManu > idadePaula) {
        
        printf("Manu é mais velha que Paula");
    
    }

    else if (idadeManu < idadePaula) {

        printf("Manu é mais nova que Paula");


        }

       else {

        printf("Manu tem a mesma idade que Paula");

       }
     
  
}