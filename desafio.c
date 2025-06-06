#include <stdio.h>
#include <string.h>

// Estrutura da carta
struct Carta {
    char estado[30];
    char cidade[30];
    char codigo[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

// Função para cadastrar uma carta
void cadastrarCarta(struct Carta *carta, int numero) {
    printf("\nCadastro da Carta %d:\n", numero);

    printf("Digite o estado: ");
    scanf("%s", carta->estado);

    printf("Digite a cidade: ");
    scanf("%s", carta->cidade);

    printf("Digite o código: ");
    scanf("%s", carta->codigo);

    printf("Digite a população: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para comparar dois atributos
void compararCartas(struct Carta c1, struct Carta c2, int atributo) {
    printf("\nResultado da rodada:\n");

    switch (atributo) {
        case 1:
            printf("Comparando População:\n");
            if (c1.populacao > c2.populacao)
                printf("Carta 1 venceu!\n");
            else if (c1.populacao < c2.populacao)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Área:\n");
            if (c1.area > c2.area)
                printf("Carta 1 venceu!\n");
            else if (c1.area < c2.area)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            if (c1.pib > c2.pib)
                printf("Carta 1 venceu!\n");
            else if (c1.pib < c2.pib)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            if (c1.pontosTuristicos > c2.pontosTuristicos)
                printf("Carta 1 venceu!\n");
            else if (c1.pontosTuristicos < c2.pontosTuristicos)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Atributo inválido!\n");
    }
}

int main() {
    struct Carta carta1, carta2;
    int escolha;

    // Cadastro das cartas
    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);

    // Escolher atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &escolha);

    // Comparação e resultado
    compararCartas(carta1, carta2, escolha);

    return 0;
}
