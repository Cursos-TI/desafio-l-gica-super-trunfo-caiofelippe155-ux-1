#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    unsigned int populacao1, populacao2; 
    int pontos_turisticos1, pontos_turisticos2, escolhaComparacao;
    float area1, area2, PIB1, PIB2, PPC1, PPC2, DENSIDADE1, DENSIDADE2, super_poder1, super_poder2; 
    char nome1[80], nome2[80], cidadeVencedora[80];

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

    printf ("Qual atributo deseja comparar?\n");
    printf ("1. População\n");  
    printf ("2. Área\n");
    printf ("3. Produto Interno Bruto\n");  
    printf ("4. Pontos Turísticos\n");
    printf ("5. Densidade\n");
    scanf ("%d", &escolhaComparacao);


	switch (escolhaComparacao) {
		case 1:;
			if (populacao1 > populacao2) {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: População\n");
	    			printf ("Carta 1: %u | Carta 2: %u\n", populacao1, populacao2);
        			printf ("Carta 1 tem maior população!\n");

    			} else if (populacao1 < populacao2) {
       				printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: População\n");
	    			printf ("Carta 1: %u | Carta 2: %u\n", populacao1, populacao2);
        			printf ("Carta 2 tem maior população!\n");
    			} else {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: População\n");
	   			    printf ("Carta 1: %u | Carta 2: %u\n", populacao1, populacao2);
        			printf ("As cartas têm a mesma população!\n");
    			}
			break;
        case 2:
			if (area1 > area2) {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Área\n");
	    			printf ("Carta 1: %f | Carta 2: %f\n", area1, area2);
        			printf ("Carta 1 tem maior área!\n");

    			} else if (area1 < area2) {
       				printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Área\n");
	    			printf ("Carta 1: %f | Carta 2: %f\n", area1, area2);
        			printf ("Carta 2 tem maior área!\n");
    			} else {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Área\n");
	   			    printf ("Carta 1: %f | Carta 2: %f\n", area1, area2);
        			printf ("As cartas têm a mesma área!\n");
    			}
			break;
        case 3:
			if (PIB1 > PIB2) {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Produto Interno Bruto\n");
	    			printf ("Carta 1: %f | Carta 2: %f\n", PIB1, PIB2);
        			printf ("Carta 1 tem maior PIB!\n");

    			} else if (PIB1 < PIB2) {
       				printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Produto Interno Bruto\n");
	    			printf ("Carta 1: %f | Carta 2: %f\n", PIB1, PIB2);
        			printf ("Carta 2 tem maior PIB!\n");
    			} else {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Produto Interno Bruto\n");
	   			    printf ("Carta 1: %f | Carta 2: %f\n", PIB1, PIB2);
        			printf ("As cartas têm o mesmo PIB!\n");
    			}
			break;  
        case 4:
			if (pontos_turisticos1 > pontos_turisticos2) {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Pontos Turísticos\n");
	    			printf ("Carta 1: %d | Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
        			printf ("Carta 1 tem mais pontos turísticos!\n");

    			} else if (pontos_turisticos1 < pontos_turisticos2) {
       				printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Pontos Turísticos\n");
	    			printf ("Carta 1: %d | Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
        			printf ("Carta 2 tem mais pontos turísticos!\n");
    			} else {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Pontos Turísticos\n");
	   			    printf ("Carta 1: %d | Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
        			printf ("As cartas têm os mesmos pontos turísticos!\n");
    			}
			break;                      
        case 5:
			if ((1 / DENSIDADE1) > (1 / DENSIDADE2)) {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Densidade Demográfica\n");
	    			printf ("Carta 1: %f | Carta 2: %f\n", DENSIDADE1, DENSIDADE2);
        			printf ("Carta 1 tem maior densidade demográfica!\n");

    			} else if ((1 / DENSIDADE1) < (1 / DENSIDADE2)) {
       				printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Densidade Demográfica\n");
	    			printf ("Carta 1: %f | Carta 2: %f\n", DENSIDADE1, DENSIDADE2);
        			printf ("Carta 2 tem maior densidade demográfica!\n");
    			} else {
        			printf ("País da Carta 1: %s | País da Carta 2: %s\n", nome1, nome2);
        			printf ("Atributo: Densidade Demográfica\n");
	   			    printf ("Carta 1: %f | Carta 2: %f\n", DENSIDADE1, DENSIDADE2);
        			printf ("As cartas têm a mesma densidade demográfica!\n");
    			}
			break;
		default:
			printf("Opção inválida\n");
			break;
	}

	return 0;
}
