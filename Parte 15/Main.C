

// RA: 2223108777
// Nome: Patrick dos Santos Azevedo

// Parte 15

#include <stdio.h>

int maiorSomaConsecutiva(int reproducoes[], int tamanho) {
    if (tamanho < 2) {
        return 0; // sem pares suficientes
    }

    int maior_Soma = reproducoes[0] + reproducoes[1];

    for (int indice = 1; indice < tamanho - 1; indice++) {
        int soma_Atual = reproducoes[indice] + reproducoes[indice + 1];

        if (soma_Atual > maior_Soma) {
            maior_Soma = soma_Atual;
        }
    }

    return maior_Soma;
}

int main() {
    int reproducoes[] = {120, 150, 80, 200, 300, 250};
    int tamanho = sizeof(reproducoes) / sizeof(reproducoes[0]);

    int resultado = maiorSomaConsecutiva(reproducoes, tamanho);

    printf("Maior soma de dias consecutivos: %d\n", resultado);

    return 0;
}
