#include <stdio.h> //Aqui é incluido uma biblioteca padrão de entrada e saída do programa e necessária para usar a função printf.

int main() {
    // Nome do Desafio
    printf("\n***Desafio Super Trunfo***\n");

    // Definindo as variáveis da Carta 1
    char carta[20] = "Carta 1";
    char estado = 'A';
    char codigo[5] = "A01";
    char nome[20] = "São Paulo";
    int populacao = 11451245;
    float area = 1521.20;
    float pib = 828.98;
    int pontos = 36;
    float densidade = populacao / area;
    float pibpercapita = (pib * 1000000000) / populacao;

    // Calculando superPoder da carta 1
    float superPoder = populacao + area + (pib * 1000000000) + pontos + pibpercapita + (1 / densidade);

    // Exibindo dados da Carta 1
    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Código da Carta: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    // Definindo as variáveis da Carta 2
    char carta2[20] = "Carta 2";
    char estado2 = 'B';
    char codigo2[5] = "B02";
    char nome2[20] = "Curitiba";
    int populacao2 = 173718;
    float area2 = 435.277;
    float pib2 = 192.07;
    int pontos2 = 30;
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;

    // Calculando superPoder da carta 2
    float superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibpercapita2 + (1 / densidade2);

    // Exibindo dados da Carta 2
    printf("\nCarta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código da Carta: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // Comparação geral de atributos entre as cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao > populacao2 ? 1 : 2, populacao > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area > area2 ? 1 : 2, area > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib > pib2 ? 1 : 2, pib > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos > pontos2 ? 1 : 2, pontos > pontos2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder > superPoder2 ? 1 : 2, superPoder > superPoder2);

    // Comparação entre as cartas (Densidade Populacional)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Densidade Populacional Carta 1: %.2f\n", densidade);
    printf("Densidade Populacional Carta 2: %.2f\n", densidade2);

    // Comparação entre as cartas (PIB / População)
    printf("\nComparação de cartas (Atributo: PIB / População):\n");
    printf("PIB / População Carta 1: %.2f\n", pibpercapita);
    printf("PIB / População Carta 2: %.2f\n", pibpercapita2);

    // Resultado da comparação das cartas
    printf("\nResultado da comparação das Carta 1 e Carta 2:\n");
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade < densidade2 ? 1 : 2, densidade < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpercapita > pibpercapita2 ? 1 : 2, pibpercapita > pibpercapita2);

    // Apresentando a opção de comparação de atributos
    printf("\n*** Escolha o atributo para comparar as cartas ***\n");
    printf("1 - Nome do Estado: Carta 1: %s | Carta 2: %s\n", nome, nome2);
    printf("2 - População: Carta 1 (%s): %d habitantes | Carta 2 (%s): %d habitantes\n", nome, populacao, nome2, populacao2);
    printf("3 - Área: Carta 1 (%s): %.2f km² | Carta 2 (%s): %.2f km²\n", nome, area, nome2, area2);
    printf("4 - PIB: Carta 1 (%s): %.2f bilhões | Carta 2 (%s): %.2f bilhões\n", nome, pib, nome2, pib2);
    printf("5 - Número de Pontos Turísticos: Carta 1 (%s): %d | Carta 2 (%s): %d\n", nome, pontos, nome2, pontos2);
    printf("6 - Densidade Demográfica: Carta 1 (%s): %.2f hab/km² | Carta 2 (%s): %.2f hab/km²\n", nome, densidade, nome2, densidade2);

    // Digitar a opção
    int opcao; 
    printf("\nDigite a opção para comparar: ");
    scanf("%d", &opcao); 

    // Comparações baseadas na opção do usuário
    switch (opcao) {
        case 1:
            printf("\nInformações das Cartas:\n");
            printf("Carta 1: %s\n", nome);
            printf("Carta 2: %s\n", nome2);
            printf("Comparação de nomes não gera vencedor!\n");
            break;

        case 2:
            printf("\nPopulação:\n");
            printf("%s: %d habitantes\n", nome, populacao);
            printf("%s: %d habitantes\n", nome2, populacao2);
            if (populacao > populacao2) {
                printf("Venceu: Carta 1 (%s)\n", nome);
            } else if (populacao2 > populacao) {
                printf("Venceu: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("\nÁrea:\n");
            printf("%s: %.2f km²\n", nome, area);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area > area2) {
                printf("Venceu: Carta 1 (%s)\n", nome);
            } else if (area2 > area) {
                printf("Venceu: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("\nPIB:\n");
            printf("%s: %.2f bilhões de reais\n", nome, pib);
            printf("%s: %.2f bilhões de reais\n", nome2, pib2);
            if (pib > pib2) {
                printf("Venceu: Carta 1 (%s)\n", nome);
            } else if (pib2 > pib) {
                printf("Venceu: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("\nNúmero de Pontos Turísticos:\n");
            printf("%s: %d pontos\n", nome, pontos);
            printf("%s: %d pontos\n", nome2, pontos2);
            if (pontos > pontos2) {
                printf("Venceu: Carta 1 (%s)\n", nome);
            } else if (pontos2 > pontos) {
                printf("Venceu: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("\nDensidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", nome, densidade);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade < densidade2) {
                printf("Venceu: Carta 1 (%s)\n", nome);
            } else if (densidade2 < densidade) {
                printf("Venceu: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
