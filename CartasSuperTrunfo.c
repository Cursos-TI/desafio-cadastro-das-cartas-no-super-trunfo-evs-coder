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
    
    printf("Estado (letra de A-H): ");
    scanf(" %c", &estadoA);
    printf("Código (1-4): ");
    scanf("%d", &codigoA);
    getchar();
    printf("Nome da Cidade: ");
    fgets(cidadeA, 20, stdin);
    printf("Número de Habitantes: ");
    scanf("%d", &populacaoA);
    printf("Área (km²): ");
    scanf("%f", &areaA);
    printf("PIB: R$ ");
    scanf("%f", &pibA);
    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pturisticosA);

    printf("\nInsira as informações da segunda carta:\n");
    
    printf("Estado (letra de A-H): ");
    scanf(" %c", &estadoB);
    printf("Código (1-4): ");
    scanf("%d", &codigoB);
    getchar();
    printf("Nome da Cidade: ");
    fgets(cidadeB, 20, stdin);
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

    float dpopA = populacaoA / areaA;
    float pibperA = pibA / populacaoA;
    float spowerA = populacaoA + areaA + pibA + pturisticosA + dpopA +pibperA;
    
    float dpopB = populacaoB / areaB;
    float pibperB = pibB / populacaoB;
    float spowerB = populacaoB + areaB + pibB + pturisticosB + dpopB +pibperB;

   printf("\nAs Cartas Criadas Foram:\n");
   
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estadoA);
   printf("Código da Carta: %c%02d\n", estadoA, codigoA);
   printf("Nome da Cidade: %s", cidadeA);
   printf("Quantidade de Habitantes: %d\n", populacaoA);
   printf("Área (km²): %0.2f\n", areaA);
   printf("PIB: R$ %0.2f\n", pibA);
   printf("Número de Pontos Turísticos: %d\n", pturisticosA);
   printf("Densidade Populacional: %0.2f\n", dpopA);
   printf("PIB per Capita: R$ %0.2f\n", pibperA);
   printf("Superpoder: %0.2f\n", spowerA);

   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estadoB);
   printf("Código da Carta: %c%02d\n", estadoB, codigoB);
   printf("Nome da Cidade: %s", cidadeB);
   printf("Quantidade de Habitantes: %d\n", populacaoB);
   printf("Área (km²): %0.2f\n", areaB);
   printf("PIB: R$ %0.2f\n", pibB);
   printf("Número de Pontos Turísticos: %d\n", pturisticosB);
   printf("Densidade Populacional: %0.2f\n", dpopB);
   printf("PIB per Capita: R$ %0.2f\n", pibperB);
   printf("Superpoder: %0.2f\n", spowerB);

   printf("\nComparação de Cartas:\n");

   if (populacaoA > populacaoB) {
        printf("Quantidade de Habitantes: Carta1 Venceu!(1)\n");
   } else {
        printf("Quantidade de Habitantes: Carta2 Venceu!(0)\n");
   }

   if (areaA > areaB) {
        printf("Área (Km²): Carta1 Venceu!(1)\n");
   } else {
        printf("Área (Km²): Carta2 Venceu!(0)\n");
   }

   if (pibA > pibB) {
        printf("PIB: Carta1 Venceu!(1)\n");
   } else {
        printf("PIB: Carta2 Venceu!(0)\n");
   }

   if (pturisticosA > pturisticosB) {
        printf("Número de Pontos Turísticos: Carta1 Venceu!(1)\n");
   } else {
        printf("Número de Pontos Turísticos: Carta2 Venceu!(0)\n");
   }

   if (dpopA < dpopB) {
        printf("Densidade Populacional: Carta1 Venceu!(1)\n");
   } else {
        printf("Densidade Populacional: Carta2 Venceu!(0)\n");
   }

   if (pibperA > pibperB) {
        printf("PIB per Capita: Carta1 Venceu!(1)\n");
   } else {
        printf("PIB per Capita: Carta2 Venceu!(0)\n");
   } 
   
   if (spowerA > spowerB) {
        printf("PIB per Capita: Carta1 Venceu!(1)\n");
   } else {
        printf("PIB per Capita: Carta2 Venceu!(0)\n");
   } 

    return 0;
}
