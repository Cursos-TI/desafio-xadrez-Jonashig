#include <stdio.h>

// ======== Funções recursivas para Torre, Bispo e Rainha ========

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoComLoops() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int i = 0;
    while (i < 2) {
        printf("Cima\n");
        i++;
    }

    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

int main() {
    int escolha;

    do {
        printf("\n===XADREZ===\n");
        printf("Escolha a peça para mover:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nMovimento da Torre:\n");
                moverTorre(5);
                break;
            case 2:
                printf("\nMovimento do Bispo:\n");
                moverBispoRecursivo(5);
                break;
            case 3:
                printf("\nMovimento da Rainha:\n");
                moverRainha(8);
                break;
            case 4:
                moverCavalo();
                break;
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (escolha != 0);

    return 0;
}
