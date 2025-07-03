#include <stdio.h>


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    #define Linhas 10
    #define Colunas 10

    #define Tamanho_Navio 3

    #define AGUA 0
    #define Navio 3

    void inicializarTabuleiro(int tabuleiro[Linhas][Colunas]){
        for(int i = 0; i < Linhas; i++){
            for (int j = 0; j< Colunas; j++) {
                tabuleiro [i][j] = AGUA;
            }
        }
    }

    int posicionarNavio(int tabuleiro [Linhas][Colunas], int linha_inicial, int coluna_inicial, int orientacao) {
       if (orientacao == 0) {
        if (coluna_inicial + Tamanho_Navio > Colunas) {
            printf("Navio horizontal fora do tabuleiro \n");
            return 0;
        }
       } else {
        if (linha_inicial + Tamanho_Navio > Linhas) {
            printf("Navio vertical fora do tabuleiro\n");
            return 0;
        }
       }

       for (int i = 0; i < Tamanho_Navio; i++) {
        if (orientacao == 0) {
            if (tabuleiro[linha_inicial][coluna_inicial + 1] == Navio) {
                printf("O navio está sobrepondo na posição (%d, %d)\n"),
                return 0 
            }
        }
       }
    }

















    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
