#include <stdio.h>

#define TAM_VERT 3   // tamanho vertical do navio
#define TAM_HOR  4   // tamanho horizontal do navio

int main(void) {
    // 1) Declaração das coordenadas iniciais
    int startXVert = 1, startYVert = 2;   // ponto de partida (linha, coluna) do navio na vertical
    int startXHor  = 5, startYHor  = 3;   // ponto de partida (linha, coluna) do navio na horizontal

    // 2) Vetores bidimensionais que armazenarão as coordenadas X e Y de cada parte dos navios
    int navioVert[TAM_VERT][2];
    int navioHor[ TAM_HOR ][2];

    // 3) Preenchimento das coordenadas do navio vertical
    //    Cada parte fica abaixo da anterior, então X incrementa e Y permanece constante
    for (int i = 0; i < TAM_VERT; i++) {
        navioVert[i][0] = startXVert + i;   // coordenada X (linha)
        navioVert[i][1] = startYVert;       // coordenada Y (coluna)
    }

    // 4) Preenchimento das coordenadas do navio horizontal
    //    Cada parte fica ao lado da anterior, então Y incrementa e X permanece constante
    for (int i = 0; i < TAM_HOR; i++) {
        navioHor[i][0] = startXHor;          // coordenada X (linha)
        navioHor[i][1] = startYHor + i;      // coordenada Y (coluna)
    }

    // 5) Exibição das coordenadas no console
    printf("=== Navio Vertical (tamanho %d) ===\n", TAM_VERT);
    for (int i = 0; i < TAM_VERT; i++) {
        printf("Parte %d: (Linha: %d, Coluna: %d)\n",
               i + 1, navioVert[i][0], navioVert[i][1]);
    }

    printf("\n=== Navio Horizontal (tamanho %d) ===\n", TAM_HOR);
    for (int i = 0; i < TAM_HOR; i++) {
        printf("Parte %d: (Linha: %d, Coluna: %d)\n",
               i + 1, navioHor[i][0], navioHor[i][1]);
    }

    return 0;
}
