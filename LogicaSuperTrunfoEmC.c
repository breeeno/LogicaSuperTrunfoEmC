#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50], codigo1[5], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;

    char estado2[50], codigo2[5], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;

    printf("Cadastro da primeira carta:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código da carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCadastro da segunda carta:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código da carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n\n---- CARTA 1 ----\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.8f bilhões por habitante\n", pib_per_capita1);

    printf("\n---- CARTA 2 ----\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.8f bilhões por habitante\n", pib_per_capita2);

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparando as cidades '%s' e '%s'\n", cidade1, cidade2);

    switch(opcao) {
        case 1:
            printf("População: %lu x %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Área: %.2f km² x %.2f km²\n", area1, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("PIB: %.2f bilhões x %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Pontos turísticos: %d x %d\n", pontos_turisticos1, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Populacional: %.2f hab/km² x %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("PIB per Capita: %.8f x %.8f\n", pib_per_capita1, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib_per_capita2 > pib_per_capita1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}