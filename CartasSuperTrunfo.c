#include <stdio.h>
#include <stdlib.h>

int main() {

    // Variáveis Carta 01

    char estado1, cidade1[50], codigo1[3];
    int pop1, tur1;
    float area1, pib1;

    //Variáveis  Carta 02

    char estado2, cidade2[50], codigo2[3];
    int pop2, tur2;
    float area2, pib2;

    
//Inserção dos dados da Carta 01


    printf("Carta 01 \n\n");


    printf("Insira o Estado (A a H): \n");
    scanf(" %c", &estado1);


    printf("Insira o codigo da carta (ex: A01): \n");
    scanf("%s", codigo1);


    printf("Insira o nome da cidade: \n");
    scanf(" %c", &cidade1[0]);
    fgets(cidade1 + 1, 49, stdin);


    printf("Insira a populacao: \n");
    scanf("%d", &pop1);


    printf("Insira a area da cidade (em km²): \n");
    scanf("%f", &area1);


    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib1);


    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &tur1);


    printf("\n\n-------------------------------------------------------------------------\n\n");


//Inseção dos dados da Carta 02


    printf("Carta 02 \n\n");


    printf("Insira o Estado (A a H): \n");
    scanf(" %c", &estado2);


    printf("Insira o codigo da carta (ex: A01): \n");
    scanf("%s", codigo2);


    printf("Insira o nome da cidade: \n");
    scanf(" %c", &cidade2[0]);
    fgets(cidade2 + 1, 49, stdin);


    printf("Insira a populacao: \n");
    scanf("%d", &pop2);


    printf("Insira a area da cidade (em km²): \n");
    scanf("%f", &area2);


    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);


    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &tur2);


    printf("\n\n-------------------------------------------------------------------------\n\n");


    // Exibir na tela as informações cadastradas

	printf("\n\n---------------- SUPER TRUNFO ----------------\n\n");

    // CARTA 01
    printf("\nCarta 01 \n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s", cidade1);
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$%.2f Bilhoes de Reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", tur1);

    // CARTA 02
    printf("\n\nCarta 02 \n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$%.2f Bilhoes de Reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", tur2);

    system("pause");

return 0;
}
