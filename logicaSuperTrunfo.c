#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    unsigned int populacao1, populacao2; 
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, PIB1, PIB2, PPC1, PPC2, DENSIDADE1, DENSIDADE2, super_poder1, super_poder2; 
    char estado1[20], estado2[80], codigo1[20], codigo2[80], nome1[80], nome2[80], cidadeVencedora[80];

    //Primeiro serão feitas as perguntas sobre a primeira cidade    

    printf ("Qual o estado da primeira carta (uma letra)?\n");
    scanf ("%s", &estado1);   

    printf ("Qual o código da primeira carta (ex: A01, B03)?\n");
    scanf ("%s", &codigo1);    

    printf ("Qual o nome da cidade da primeira carta?\n");
    scanf ("%s", &nome1);   
    
    printf ("Qual o número de habitantes da cidade da primeira carta?\n");
    scanf ("%u", &populacao1);      

    printf ("Qual a área da cidade da primeira carta (em km²)?\n");
    scanf ("%f", &area1);

    printf ("Qual o produto interno bruto da cidade da primeira carta?\n");
    scanf ("%f", &PIB1);    

    printf ("Qual a quantidade de pontos turísticos da cidade da primeira carta?\n");
    scanf("%d", &pontos_turisticos1);   
    
    //Agora começam as perguntas sobre a segunda cidade
    
    printf ("Qual o estado da segunda carta (uma letra)?\n");
    scanf ("%s", &estado2);   

    printf ("Qual o código da segunda carta (ex: A01, B03)?\n");
    scanf ("%s", &codigo2);    

    printf ("Qual o nome da cidade da segunda carta?\n");
    scanf ("%s", &nome2);   
    
    printf ("Qual o número de habitantes da cidade da segunda carta?\n");
    scanf ("%u", &populacao2);    

    printf ("Qual a área da cidade da segunda carta (em km²)?\n");
    scanf ("%f", &area2);

    printf ("Qual o produto interno bruto da cidade da segunda carta?\n");
    scanf ("%f", &PIB2);    

    printf ("Qual a quantidade de pontos turísticos da cidade da segunda carta?\n");
    scanf("%d", &pontos_turisticos2);   

    // Área para cálculos dos atributos PPC e Densidade

    PPC1 = PIB1 / (float) populacao1;
    PPC2 = PIB2 / (float) populacao2;
    DENSIDADE1 = (float) populacao1 / area1;
    DENSIDADE2 = (float) populacao2 / area2;

    // Comparação de Cartas:
    // Utilisando apenas um dos atributos 


    if (populacao1 > populacao2) {
        printf ("Carta 1 %s: %u\n", nome1, populacao1);
        printf ("Carta 2 %s: %u\n", nome2, populacao2);
        printf ("Carta 1 tem maior população!\n");
    } else {
        printf ("Carta 1 %s: %u\n", nome1, populacao1);
        printf ("Carta 2 %s: %u\n", nome2, populacao2);
        printf ("Carta 2 tem maior população!\n");
    }

    return 0;
}
