#include <stdio.h>

int main() {

    //Definição do Tabuleiro
    char * tabuleiro[11][11] = {
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

    //Definição dos Navios
    char * navio1[3] = {"3", "3", "3"};
    char * navio2[3] = {"3", "3", "3"};

    //Variáveis de Controle
    int coluna_inicial = 3;
    int linha_inicial = 3;

    //Inserir Navio Vertical
    for (int substituidor = 0; substituidor < 3; substituidor++)
    {
        tabuleiro[coluna_inicial + substituidor][linha_inicial] = navio1[substituidor];
    }

    //Inserir Navio Horizontal
    for (int substituidor = 0; substituidor < 3; substituidor++)
    {
        tabuleiro[coluna_inicial][linha_inicial + substituidor] = navio1[substituidor];
    }
    

    printf("TABULEIRO DE BATALHA NAVAL\n\n");
 
    //Exibição do Tabuleiro
    for (int linha = 0; linha < 11; linha++)
    {
        for (int coluna = 0; coluna < 11; coluna++)
        {
            printf("%s ", tabuleiro[linha][coluna]);
        }
        printf("\n"); /* Quebra de Linha */
    }

    printf("\n\n"); /* Quebra de Linha */
    
    return 0;

}
