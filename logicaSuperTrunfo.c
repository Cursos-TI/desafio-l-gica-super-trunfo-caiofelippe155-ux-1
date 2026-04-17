#include <stdio.h>
//#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
	
    // Definição das variáveis para armazenar as propriedades das cidades

    unsigned int populacao1, populacao2; 
    int pontos_turisticos1, pontos_turisticos2, primeiroAtributo, segundoAtributo, resultado1, resultado2;
    float area1, area2, PIB1, PIB2, PPC1, PPC2, DENSIDADE1, DENSIDADE2, super_poder1, super_poder2; 
    char nome1[80], nome2[80], cidadeVencedora[80];

// Para facilitar os testes, as informações das cartas estão pré-definidas.

//    strcpy(nome1, "CARA");
//    strcpy(nome2, "COROA");
//    populacao1 = 52023;
//    populacao2 = 62035;
//    area1 = 5231;
//    area2 = 4583;
//    PIB1 = 82365458;
//    PIB2 = 96325458;
//    pontos_turisticos1 = 15;
//    pontos_turisticos2 = 20;

    //Primeiro serão feitas as perguntas sobre a primeira cidade    

    printf ("Qual o nome do país da primeira carta?\n");
    scanf ("%s", &nome1);   
    
    printf ("Qual o número de habitantes do país da primeira carta?\n");
    scanf ("%u", &populacao1);      

    printf ("Qual a área do país da primeira carta (em km²)?\n");
    scanf ("%f", &area1);

    printf ("Qual o produto interno bruto do país da primeira carta?\n");
    scanf ("%f", &PIB1);    

    printf ("Qual a quantidade de pontos turísticos do país da primeira carta?\n");
    scanf("%d", &pontos_turisticos1);   
    
    //Agora começam as perguntas sobre a segunda cidade
       
    printf ("Qual o nome do país da segunda carta?\n");
   scanf ("%s", &nome2);   
    
    printf ("Qual o número de habitantes do país da segunda carta?\n");
    scanf ("%u", &populacao2);    

    printf ("Qual a área do país da segunda carta (em km²)?\n");
    scanf ("%f", &area2);

    printf ("Qual o produto interno bruto do país da segunda carta?\n");
    scanf ("%f", &PIB2);    

    printf ("Qual a quantidade de pontos turísticos do país da segunda carta?\n");
    scanf("%d", &pontos_turisticos2);   

    // Área para cálculos dos atributos PPC e Densidade

    PPC1 = PIB1 / (float) populacao1;
    PPC2 = PIB2 / (float) populacao2;
    DENSIDADE1 = (float) populacao1 / area1;
    DENSIDADE2 = (float) populacao2 / area2;

    // Comparação de Cartas:

    printf ("Escolha o primeiro atributo para comparar:\n");
    printf ("1. População\n");  
    printf ("2. Área\n");
    printf ("3. Produto Interno Bruto\n");  
    printf ("4. Pontos Turísticos\n");
    printf ("5. Densidade\n");
    scanf ("%d", &primeiroAtributo);

    if (primeiroAtributo == 1 ) {
        printf ("Voce escolheu Populacao\n");   
        resultado1 = populacao1 > populacao2 ? 1 : 0;
    } else if (primeiroAtributo == 2) {
        printf ("Voce escolheu Area\n");      
        resultado1 = area1 > area2 ? 1 : 0;
    } 
    else if (primeiroAtributo == 3) {
        printf ("Voce escolheu Produto Interno Bruto\n");      
        resultado1 = PIB1 > PIB2 ? 1 : 0;
    } 
    else if (primeiroAtributo == 4) {
        printf ("Voce escolheu Pontos Turisticos\n");      
        resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    } 
    else if (primeiroAtributo == 5) {
        printf ("Voce escolheu Densidade\n");      
        resultado1 = DENSIDADE1 > DENSIDADE2 ? 1 : 0;
    } 
    else {
        printf ("Opcao invalida!\n");
    }

    printf ("Escolha o segundo atributo para comparar:\n");
    printf ("1. População\n");  
    printf ("2. Área\n");
    printf ("3. Produto Interno Bruto\n");  
    printf ("4. Pontos Turísticos\n");
    printf ("5. Densidade\n");
    scanf ("%d", &segundoAtributo);    

    if (primeiroAtributo == segundoAtributo) {
        printf ("Voce escolheu o mesmo atributo para comparar. Por favor, escolha atributos diferentes.\n");
		return 0;
    } else if (segundoAtributo == 1 ) {
        printf ("Voce escolheu Populacao\n");   
        resultado2 = populacao1 > populacao2 ? 1 : 0;
    } else if (segundoAtributo == 2) {
        printf ("Voce escolheu Area\n");      
        resultado2 = area1 > area2 ? 1 : 0;
    } 
    else if (segundoAtributo == 3) {
        printf ("Voce escolheu Produto Interno Bruto\n");      
        resultado2 = PIB1 > PIB2 ? 1 : 0;
    } 
    else if (segundoAtributo == 4) {
        printf ("Voce escolheu Pontos Turisticos\n");      
        resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    } 
    else if (segundoAtributo == 5) {
        printf ("Voce escolheu Densidade\n");      
        resultado2 = DENSIDADE1 > DENSIDADE2 ? 1 : 0;
    } 
    else {
        printf ("Opcao invalida!\n");
    }

    if (resultado1 == 1 && resultado2 == 1) {          
        printf ("A carta 1 venceu!\n");

    } else if (resultado1 != resultado2) {           
        printf ("Empate!\n");

    } else {            
        printf ("Infelizmente, você perdeu\n");
}
	
	return 0;
}
