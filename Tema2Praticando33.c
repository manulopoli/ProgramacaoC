#include <stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      // Entrada de notas
      printf("Digite a primeira nota: ");
      scanf("%f", &nota1);
      printf("Digite a segunda nota: ");
      scanf("%f", &nota2);

      //Testar a condição sea nota é >= 0 e < 10
    if ((nota1>= 0 && nota1<=10) && (nota2>= 0 && nota2<=10)) {
      media = (nota1 + nota2) / 2; // Cálculo da média
      printf("A média é: %.2f\n", media);
    } else {
        printf("Entrada com valores errados\n");
    }
      break;

    case 2:
      // Determinação do status com base na média
      printf("Determinar status\n");
      printf("Digite a média:");
      scanf("%f", &media);
      media >= 5 ? printf ("Aprovado!\n") : printf ("Reprovado!\n");
      break;

     // Com opção de Recuperação
     //if (media >= 7.0) {
     //   printf("Status: Aprovado\n");
     // } else if (media >= 5.0) {
     //   printf("Status: Recuperação\n");
     // } else {
     //   printf("Status: Reprovado\n");
     // }
     // break;


    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}