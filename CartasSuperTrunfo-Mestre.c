#include <stdio.h>
#include <stdbool.h> // Para usar Bool

// Desafio Super Trunfo - Países
// Desafio nível Mestre

// O sistema é extremamente simples, e só atende ao necessário

// A booleana de comparação. Por ser uma bool, exigida pelo trabalho, não é possível calcular empates
// Prova: "A saída da comparação será 1 ou 0, caso a relação seja verdadeira ou falsa. Se o resultado da comparação for 1, a carta 1 ganhou; se o resultado for 0, a carta 2 ganhou." (Atividade da Estácio)
bool Comparacao(float Valor1, float Valor2) {
    return Valor1 > Valor2;
}

int main() {
    // Declarando as variáveis
    char EstadoCarta_1;
    char CodigoCarta_1[5]; // O código, mesmo contendo somente 3 caracteres, precisa de mais 2 espaços na array por causa do \n. Quase fico com dor de cabeça por causa disso.
    char NomeCidade_1[52];
    int Populacao_1;
    float AreaKm2_1;
    float DensidadePopulacional_1;
    float PIB_1;
    double PIBPerCapita_1;
    int PontosTuristicos_1;
    long SuperPoder_1; //Antes era uma float, mas ficava chegando no valor máximo muito facilmente

    // Declarando as variáveis da outra carta
    char EstadoCarta_2;
    char CodigoCarta_2[5];
    char NomeCidade_2[52];
    int Populacao_2;
    float AreaKm2_2;
    float DensidadePopulacional_2;
    float PIB_2;
    double PIBPerCapita_2;
    int PontosTuristicos_2;
    long SuperPoder_2;

        // Inserção de dados da primeira carta

        printf("=== PRIMEIRA CARTA ===\n");

        printf("Digite o estado da primeira carta, de A a H: ");
        scanf(" %c", &EstadoCarta_1);

        printf("Digite o código da primeira carta (Exemplo: A01, C04): ");
        scanf("%s", CodigoCarta_1);

        printf("Digite o nome da primeira cidade (Máximo 50 caracteres): ");
        scanf(" %[^\n]s", NomeCidade_1); // %[^\n]s faz o scanf detectar espaços! :)

        printf("Digite o número da população da primeira cidade: ");
        scanf("%d", &Populacao_1);

        printf("Digite o número da área da primeira cidade, em km²: ");
        scanf("%f", &AreaKm2_1);
        
        printf("Digite o valor do PIB da primeira cidade, em bilhões de reais: ");
        scanf("%f", &PIB_1);
        
        printf("Digite o número de pontos turísticos da primeira cidade: ");
        scanf("%d", &PontosTuristicos_1);

        // Inserção de dados da segunda carta

        printf("=== SEGUNDA CARTA ===\n");

        printf("Digite o estado da segunda carta, de A a H: ");
        scanf(" %c", &EstadoCarta_2);

        printf("Digite o código da segunda carta (Exemplo: A01, C04): ");
        scanf("%s", CodigoCarta_2);

        printf("Digite o nome da segunda cidade (Máximo 50 caracteres): ");
        scanf(" %[^\n]s", NomeCidade_2); // %[^\n]s faz o scanf detectar espaços! :)

        printf("Digite o número da população da segunda cidade: ");
        scanf("%d", &Populacao_2);

        printf("Digite o número da área da segunda cidade, em km²: ");
        scanf("%f", &AreaKm2_2);
        
        printf("Digite o valor do PIB da segunda cidade, em bilhões de reais: ");
        scanf("%f", &PIB_2);
        
        printf("Digite o número de pontos turísticos da segunda cidade: ");
        scanf("%d", &PontosTuristicos_2);
    
    // Cálculo do PIB per capita e da densidade populacional
    // Densidade populacional = População / Área
    // PIB Per Capita = PIB / População

        DensidadePopulacional_1 = (Populacao_1/AreaKm2_1);
        PIBPerCapita_1 = ((PIB_1 * 1000000000)/Populacao_1); //Convertendo o PIB em bilhões para um número grande, para poder calcular

        DensidadePopulacional_2 = (Populacao_2/AreaKm2_2);
        PIBPerCapita_2 = ((PIB_2 * 1000000000)/Populacao_2);

        SuperPoder_1 = Populacao_1 + PIB_1 + AreaKm2_1 + PontosTuristicos_1 + DensidadePopulacional_1 + PIBPerCapita_1;
        SuperPoder_2 = Populacao_2 + PIB_2 + AreaKm2_2 + PontosTuristicos_2 + DensidadePopulacional_2 + PIBPerCapita_2;


    // Exibição dos Dados das Cartas:

        printf("\n=== PRIMEIRA CARTA ===\n");
        printf("Estado: %c\n", EstadoCarta_1); // Estado
        printf("Código: %s\n", CodigoCarta_1); // Código
        printf("Nome da Cidade: %s\n", NomeCidade_1); // Nome
        printf("População: %d habitantes\n", Populacao_1); // População
        printf("Área: %.2f km²\n", AreaKm2_1); // Área
        printf("Densidade Populacional: %.2f pessoas/km²\n", DensidadePopulacional_1); // Densidade
        printf("PIB: %.2f bilhões de reais\n", PIB_1); // PIB
        printf("PIB per capita: %.2f reais\n", PIBPerCapita_1); //PIB Per Capita = PIB / População
        printf("Número de Pontos Turísticos: %d\n", PontosTuristicos_1); // Turismo
        printf("Super Poder: %ld\n", SuperPoder_1); // Poder


        printf("\n=== SEGUNDA CARTA ===\n");
        printf("Estado: %c\n", EstadoCarta_2); // Estado
        printf("Código: %s\n", CodigoCarta_2); // Código
        printf("Nome da Cidade: %s\n", NomeCidade_2); // Nome
        printf("População: %d habitantes\n", Populacao_2); // População
        printf("Área: %.2f km²\n", AreaKm2_2); // Área
        printf("Densidade Populacional: %.2f pessoas/km²\n", DensidadePopulacional_2); // Densidade
        printf("PIB: %.2f bilhões de reais\n", PIB_2); // PIB
        printf("PIB per capita: %.2lf reais\n", PIBPerCapita_2); //PIB Per Capita
        printf("Número de Pontos Turísticos: %d\n", PontosTuristicos_2); // Turismo
        printf("Super Poder: %ld\n", SuperPoder_2); // Poder

        // RESULTADOS!
        // A função Comparacao diz que o valor 1 é maior que o valor 2. Se isso for verdade, a expressão designa a carta 1 como vencedora. Caso contrário, a carta 2 vence.

        printf("\n=== RESULTADOS ===\n");

        printf("População: Carta %d venceu!\n", Comparacao(Populacao_1, Populacao_2) ? 1 : 2);
        printf("Área: Carta %d venceu!\n", Comparacao(AreaKm2_1, AreaKm2_2) ? 1 : 2);
        printf("Densidade Populacional: Carta %d venceu!\n", Comparacao(DensidadePopulacional_2, DensidadePopulacional_1) ? 1 : 2); // Invertido, pois o MENOR valor deve vencer nessa
        printf("PIB: Carta %d venceu!\n", Comparacao(PIB_1, PIB_2) ? 1 : 2);
        printf("PIB per capita: Carta %d venceu!\n", Comparacao(PIBPerCapita_1, PIBPerCapita_2) ? 1 : 2);
        printf("Pontos Turísticos: Carta %d venceu!\n", Comparacao(PontosTuristicos_1, PontosTuristicos_2) ? 1 : 2);
        printf("SuperPoder: Carta %d venceu!\n", Comparacao(SuperPoder_1, SuperPoder_2) ? 1 : 2);

    return 0;
}
