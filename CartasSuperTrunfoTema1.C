#include <stdio.h> //Aqui é incluido uma biblioteca padrão de entrada e saída do programa e necessária para usar a função printf.

int main(){// Aqui é a função principal, toda aplicação C começa pela função main.
    // Abaixo foi iniciado printf com o nome do desafio, e a sintaxe das variáveis da carta 1 e carta 2 do desafio supertrunfo.c, seguindo a impressão das variáveis.

    printf ("\n***Desafio Super Trunfo***\n"); //Nome do Desafio, pulando linha no ínicio e no final para seguir aos dados das cartas.

    char carta[20] = "Carta 1"; // Aqui uma variável (carta 1), que pode armazenar letra ou símbolo ou nome utilizando até 20 caracteres.
    char estado = 'A'; //Aqui uma variável de único caractere ('A'), podendo armazenar como uma letra ou símbolo. 
    char codigo[5] = "A01";// Aqui uma variável (código) que pode armazenar letra ou símbolo utilizando até 5 caracteres.
    char nome[20] = "São Paulo"; // Aqui uma variavel (nome) que pode armazenar um nome com até 20 caracteres.
    int populacao = 11451245;// Aqui uma variável (população) que pode armazenar um número inteiro sem contar casa decimal.
    float area = 1521.20; // Aqui uma variável (area) que pode armazenar números com casas decimais.
    float pib = 828.98;// Aqui uma variável (pib) que pode armazenar números com casas decimais.
    int pontos = 36;//Aqui uma variável (pontos) que pode armazenar um número inteiro sem contar casa decimal.
    float densidade =  populacao / area; //Aqui uma variável densidade, para calcular a divisão de duas variáveis;
    float pibpercapita = (float) (pib * 1000000000) / populacao; //Variável pibpercapita em float explicito com conversão de valor em bilhoes do pib, dividindo as variáveis pib / populacao;
    
    densidade = populacao / area;//Calculo da densidade
    pibpercapita = (pib * 1000000000) / populacao;//Calculo do Pib percapita
    float superPoder = populacao + area + (pib * 1000000000) + pontos + pibpercapita + (1 / densidade);
    // Abaixo utilizamos a função printf para imprimir as informações que queremos na tela do programa. Ele pega as informações contidas nas variaveis e mostra na tela.

    printf("\nCarta 1 \n"); // Função que imprime a variável (Carta 1) pulando uma linha \n para ficar mais organizado.
    printf("Estado: %c \n", 'A');//Imprime a variável estado (Estado: A) com indicador expecificador unico caractere, pulando uma linha \n).
    printf("Código da Carta: %s \n", codigo);// Imprime a variável codigo (Código da carta) com especificador de strings, pulando uma linha \n).
    printf("Nome da cidade: %s \n", nome);// Imprime a variável nome (Nome da cidade) com especificador de strings, pulando uma linha \n).
    printf("População: %d \n", populacao);//Imprime a variável populacao (População) com especificação de um número inteiro decimal, pulando uma linha \n).
    printf("Área: %.2f km²\n", area);// Imprime a variável area (Área em Km²) que exibe a especificação do ponto flutuante com duas casas decimais e exibe em "km²".
    printf("PIB: %.2f bilhões de reais \n", pib);// Imprime a variável pib (PIB) com especificação do ponto flutuante com duas casas decimais e exibe "bilhões de reais", pulando a linha \n).
    printf("Número de Pontos Turísticos: %d \n", pontos);// Imprime a variável pontos (Pontos Turísticos) com o especificador de um número inteiro decimal, pulando uma linha \n).
    printf("Densidade Populacional: %.2f hab/km²\n", densidade); //Imprime o resultado da densidade (Densidade Populacional) seguindo a divisão das variáveis populacao / area;
    printf("PIB per Capita: %.2f reais\n", pibpercapita); //Imprime o resultado de pibpercapita (PIB per Capita) seguindo divisão do pib(convertido em bilhões de reais) pela população;


    printf("\nPróxima Carta: \n"); //Separação para os dados da próxima carta 2, são utilizados os mesmo atributos de especificadores da carta 1.

    char carta2[20] = "carta 2";//Foi colocado a nomeação da variável com representação no número 2 para que o sistema rode perfeitamente. 
    char estado2 = 'B';
    char codigo2[5] = "B02";
    char nome2[20] = "Curitiba";
    int populacao2 = 173718;
    float area2 = 435.277;
    float pib2 = 192.07;
    int pontos2 = 30;
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
    float superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibpercapita2 + (1 / densidade2);

    printf("\nCarta 2 \n");
    printf("Estado: %c \n", 'B');
    printf("Código da Carta: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    printf("\nComparação de Cartas:");//Calculo de comparação entre as variáveis entre a comparação maior valor vence que utilizando >
    printf("\nPopulação: Carta %d venceu (%d)\n", populacao > populacao2 ? 1 : 2, populacao > populacao2); 
    printf("Área: Carta %d venceu (%d)\n", area > area2 ? 1 : 2, area > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib > pib2 ? 1 : 2, pib > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos > pontos2 ? 1 : 2, pontos > pontos2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder > superPoder2 ? 1 : 2, superPoder > superPoder2);
    
    
    

    return 0;

}
