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

    //Definição do Navio
    char * navio[3] = {"3", "3", "3"};

    //Navio Vertical
    for (int substituidor = 0; substituidor < 3; substituidor++)
    {
        int linha_inicial = 2;
        int coluna_inicial = 2;
        tabuleiro[linha_inicial + substituidor][coluna_inicial] = navio[substituidor];
    }

    //Navio Horizontal
    for (int substituidor = 0; substituidor < 3; substituidor++)
    {
        int coluna_inicial = 5;
        int linha_inicial = 2;
        tabuleiro[linha_inicial][coluna_inicial + substituidor] = navio[substituidor];
    }

    //Navio Diagonal ↘
    for (int substituidor = 0; substituidor < 3; substituidor++)
    {
        int coluna_inicial = 7;
        int linha_inicial = 7;  
        tabuleiro[linha_inicial + substituidor][coluna_inicial + substituidor] = navio[substituidor];
    }

    //Navio Diagonal ↖
    for (int substituidor = 0; substituidor < 3; substituidor++)
    {
        int coluna_inicial = 4;
        int linha_inicial = 7;  
        tabuleiro[linha_inicial - substituidor][coluna_inicial + substituidor] = navio[substituidor];
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
