#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //informações da carta A:

    char estadoA;
    int codigoA;
    char cidadeA[20];
    int populacaoA;
    float areaA;
    float pibA;
    int pturisticosA;

    //informações da carta B:

    char estadoB;
    int codigoB;
    char cidadeB[20];
    int populacaoB;
    float areaB;
    float pibB;
    int pturisticosB;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("\nInsira as informações da primeira carta:\n");
    
    printf("Estado: ");
    scanf(" %c", &estadoA);
    printf("Código (1-4): ");
    scanf("%d", &codigoA);
    printf("Nome da Cidade: ");
    fgets(estadoA, 20, stdin);
    printf("Número de Habitantes: ");
    scanf("%d", &populacaoA);
    printf("Área (km²): ");
    scanf("%f", &areaA);
    printf("PIB: R$ ");
    scanf("%f", &pibA);
    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pturisticosA);

    rintf("\nInsira as informações da segunda carta:\n");
    
    printf("Estado: ");
    scanf(" %c", &estadoB);
    printf("Código (1-4): ");
    scanf("%d", &codigoB);
    printf("Nome da Cidade: ");
    fgets(estadoB, 20, stdin);
    printf("Número de Habitantes: ");
    scanf("%d", &populacaoB);
    printf("Área (km²): ");
    scanf("%f", &areaB);
    printf("PIB: R$ ");
    scanf("%f", &pibB);
    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pturisticosB);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   printf("\nAs Cartas Criadas Foram:\n");
   
   printf("Carta 1:\n");
   printf("Estado: %d\n", estadoA);
   printf("Código da Carta: %c%02d\n", estadoA, codigoA);
   printf("Nome da Cidade: %s\n", cidadeA);
   printf("Quantidade de Habitantes: %d\n", populacaoA);
   printf("Área (km²): %0.2f", areaA);
   printf("PIB: R$ %0.2f", pibA);
   printf("Número de Pontos Turísticos: %d", pturisticosA);

   printf("Carta 2:\n");
   printf("Estado: %d\n", estadoB);
   printf("Código da Carta: %c%02d\n", estadoB, codigoB);
   printf("Nome da Cidade: %s\n", cidadeB);
   printf("Quantidade de Habitantes: %d\n", populacaoB);
   printf("Área (km²): %0.2f", areaB);
   printf("PIB: R$ %0.2f", pibB);
   printf("Número de Pontos Turísticos: %d", pturisticosB);
   
    return 0;
}
