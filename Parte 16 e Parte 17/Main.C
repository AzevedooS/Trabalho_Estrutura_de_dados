

// RA:2223108777 
// Nome: Patrick dos Santos Azevedo

//Parte 16 e Parte 17

#include <stdio.h>

void comparar_Funcionarios(int notas_Funcionario_1[], int notas_Funcionario_2[], int tamanho) {
    int pontos1 = 0;
    int pontos2 = 0;

    for (int categoria = 0; categoria < tamanho; categoria++) {
        if (notas_Funcionario_1[categoria] > notas_Funcionario_2[categoria]) {
            printf("Categoria %d: A (%d) vs B (%d) -> A ganha 1 ponto\n",
                   categoria + 1,
                   notas_Funcionario_1[categoria],
                   notas_Funcionario_2[categoria]);
            pontosA++;
        } else if (notas_Funcionario_2[categoria] > notas_Funcionario_1[categoria]) {
            printf("Categoria %d: A (%d) vs B (%d) -> B ganha 1 ponto\n",
                   categoria + 1,
                   notas_Funcionario_1[categoria],
                   notas_Funcionario_2[categoria]);
            pontosB++;
        } else {
            printf("Categoria %d: A (%d) vs B (%d) -> Nenhum ponto\n",
                   categoria + 1,
                   notas_Funcionario_1[categoria],
                   notas_Funcionario_2[categoria]);
        }
    }

    printf("\nResultado final:\n");
    printf("Funcionario A: %d ponto(s)\n", pontosA);
    printf("Funcionario B: %d ponto(s)\n", pontosB);
}

int main() {
    int notas_Funcionario_1[] = {8, 7, 9};
    int notas_Funcionario@[] = {6, 7, 10};

    int tamanho = 3;

    comparar_Funcionarios(notas_Funcionario_1, notas_Funcionario_2, tamanho);

    return 0;
}
