#include <stdio.h> //Aqui é incluido uma biblioteca padrão de entrada e saída do programa e necessária para usar a função printf.
int main(){// Aqui é a função principal, toda aplicação C começa pela função main.
    // Abaixo foi iniciado printf com o nome do desafio, e a sintaxe das variáveis da carta 1 e carta 2 do desafio supertrunfo.c, seguindo a impressão das variáveis.

    printf ("\nDesafio Super Trunfo\n"); //Nome do Desafio, pulando linha no ínicio e no final para seguir aos dados das cartas.

    char carta[20] = "Carta 1" // Aqui uma variável (carta 1), que pode armazenar letra ou símbolo ou nome utilizando até 20 caracteres.
    char estado[20] = "Estado" //Aqui uma variável de único caractere ('A'), podendo armazenar como uma letra ou símbolo. 
    char codigo[5] = "A01" // Aqui uma variável (código) que pode armazenar letra ou símbolo utilizando até 5 caracteres.
    char nome[20] = "São Paulo"; // Aqui uma variavel (nome) que pode armazenar um nome com até 20 caracteres.
    int populacao[20] = 11451245;// Aqui uma variável (população) que pode armazenar um número inteiro sem contar casa decimal.
    float area = 1521.20; // Aqui uma variável (area) que pode armazenar números com casas decimais.
    float pib = 828.98;// Aqui uma variável (pib) que pode armazenar números com casas decimais.
    int pontos = 36;//Aqui uma variável (pontos) que pode armazenar um número inteiro sem contar casa decimal.


    // Abaixo utilizamos a função printf para imprimir as informações que queremos na tela do programa. Ele pega as informações contidas nas variaveis e mostra na tela.


    printf("\nCarta 1 \n"); // Função que imprime a variável (Carta 1) pulando uma linha \n para ficar mais organizado.
    printf("Estado: %c \n", 'A');//Imprime a variável estado (Estado: A) com indicador expecificador unico caractere, pulando uma linha \n).
    printf("Código da Carta: %s \n", codigo);// Imprime a variável codigo (Código da carta) com especificador de strings, pulando uma linha \n).
    printf("Nome da cidade: %s \n", nome);// Imprime a variável nome (Nome da cidade) com especificador de strings, pulando uma linha \n).
    printf("População: %d \n", populacao);//Imprime a variável populacao (População) com especificação de um número inteiro decimal, pulando uma linha \n).
    printf("Área: %.2f km²\n", area);// Imprime a variável area (Área em Km²) que exibe a especificação do ponto flutuante com duas casas decimais e exibe em "km²".
    printf("PIB: %.2f bilhões de reais \n", pib);// Imprime a variável pib (PIB) com especificação do ponto flutuante com duas casas decimais e exibe "bilhões de reais", pulando a linha \n).
    printf("Número de Pontos Turísticos: %d \n", pontos);// Imprime a variável pontos (Pontos Turísticos) com o especificador de um número inteiro decimal, pulando uma linha \n).
    

}