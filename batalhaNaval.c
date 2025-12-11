#include <stdio.h>

//Definição das Linhas e Colunas do Tabuleiro
#define qtd_linhas 11
#define qtd_colunas 11

int main() {

    //Definição do Tabuleiro
    char * tabuleiro[qtd_linhas][qtd_colunas] = {
        {"  ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"},
        {" 1", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {" 2", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {" 3", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {" 4", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {" 5", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {" 6", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {" 7", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {" 8", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {" 9", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"10", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"}
    };

    //Navio Cone
    for (int linha = 0; linha < 3; linha++)
    {
        int linha_inicial = 3;
        int coluna_inicial = 2;
        
        for (int coluna = 0; coluna <= linha*2; coluna++)
        {
            tabuleiro[linha_inicial + linha - 2][coluna_inicial*2 - linha + coluna] = "1";
        }
    }

    //Navio Cruz
    for (int linha = 0; linha < 3; linha++)
    {
        int linha_inicial = 8;
        int coluna_inicial = 2;
        
        for (int coluna = 0; coluna < 3; coluna++)
        {
            tabuleiro[linha_inicial - 2 + linha][coluna_inicial] = "2";
            tabuleiro[linha_inicial -1][coluna_inicial + coluna -1] = "2";
        }
    }

    //Navio Octaedro
    for (int linha = 0; linha < 3; linha++)
    {
        int linha_inicial = 7;
        int coluna_inicial = 4;
        
        for (int coluna = 0; coluna <= linha*2; coluna++)
        {
            tabuleiro[linha_inicial + linha - 2][coluna_inicial*2 - linha + coluna] = "3";
            tabuleiro[linha_inicial - linha + 2][coluna_inicial*2 - linha + coluna] = "3";
        }
    }

    //Exibição do Tabuleiro
    printf("TABULEIRO DE BATALHA NAVAL\n\n");

    for (int linha = 0; linha < qtd_linhas; linha++)
    {
        for (int coluna = 0; coluna < qtd_colunas; coluna++)
        {
            printf("%s ", tabuleiro[linha][coluna]);
        }
        printf("\n"); /* Quebra de Linha */
    }
    printf("\n\n"); /* Quebra de Linha */
    
    return 0;


}
