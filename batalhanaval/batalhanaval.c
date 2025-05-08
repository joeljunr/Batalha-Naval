#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'}; // Declara e inicializa o vetor linha
    char *coluna[10] = {" 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10"}; // Declara e inicializa o vetor coluna
    // Declara o tabuleiro
    // O tabuleiro é uma matriz 10x10, onde cada posição pode ser 0 (vazio)
    int tabuleiro[10][10]; // Inicializa o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // Inicializa todas as posições do tabuleiro como 0
        }
    }

    // Declara os navios
    // Cada navio é representado por um vetor 3x3
    int navio_hor_linha = 3; // Declara a linha do navio horizontal
    int navio_hor_coluna =3; // Declara a coluna do navio horizontal
    int navio_ver_linha = 5; // Declara a linha do navio vertical
    int navio_ver_coluna = 5; // Declara a coluna do navio vertical
    int navio_diag1_linha = 0 , navio_diag1_coluna = 0; // Navio diagonal (crescente)
    int navio_diag2_linha = 7, navio_diag2_coluna = 9; // Navio diagonal (decrescente)

    //Agora nos vamos collocar os navios no tabuleiro

    // Coloca o primeiro navio diagonal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_diag1_linha + i][navio_diag1_coluna + i] = 3; // Marca a posição do navio diagonal no tabuleiro
    }

    // Coloca o segundo navio diagonal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_diag2_linha + i][navio_diag2_coluna - i] = 3; // Marca a posição do navio diagonal no tabuleiro
    }


    // Coloca o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_hor_linha][navio_hor_coluna + i] = 3; // Marca a posição do navio horizontal no tabuleiro
    }

    //Vamos colocar o navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_ver_linha + i][navio_ver_coluna] = 3; // Marca a posição do navio vertical no tabuleiro
    }
    // Agora vamos imprimir o tabuleiro
    printf("\n");
    printf(" TABULEIRO BATALHA NAVAL\n");
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    } 
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf(" %s ", coluna[i]); // Imprime o cabeçalho do tabuleiro
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0) {
                printf(" 0 "); // Imprime 0 se a posição estiver vazia
            } else {
                printf(" 3 "); // Imprime um 3 se a posição estiver ocupada por um navio
            }
        }
        printf("\n");
    }

    printf("\n");
    // Tive muita dificuldade para conseguir chegar nesse ponto e precisei de ajudas extras
    //Preciso do feedback do professor, muito obrigado

    
    return 0;
}