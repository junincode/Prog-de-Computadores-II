#include <stdio.h>
#include <stdlib.h>

int **aloca_linhas(int lin){
    int** m = (int**) malloc (lin * sizeof(int*));
    return m;
}

void aloca_colunas(int** m, int lin, int col){
    for(int i = 0; i < lin; i++){
        m[i] = (int*) calloc (1, col * sizeof(int));
    }
}

void le_dados(int** m, int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", *(m + i) + j);
        }
    }
}

void imprime_matriz(int** m, int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("[ %d ]", *(*(m + i) + j));
        }
        printf("\n");
    }
}

void troca_linhas(int** m, int linha1, int linha2){
    int* aux = (int*) malloc(sizeof(m + linha1));
    aux = *(m + linha1);
    *(m + linha1) = *(m + linha2);
    *(m + linha2) = aux;
}

int main(){
    
    int lin, col;
    int linha1, linha2;
    
    printf("LINHAS: ");
    scanf("%d", &lin);
    
    printf("COLUNAS: ");
    scanf("%d", &col);
    
    int** m = aloca_linhas(lin);
    
    aloca_colunas(m, lin, col);
    
    imprime_matriz(m, lin, col);
    
    le_dados(m, lin, col);
    
    imprime_matriz(m, lin, col);
    
    printf("Qual linhas quer trocar [0...%d]? ", lin - 1);
    scanf("%d %d", &linha1, &linha2);
    
    troca_linhas(m, linha1, linha2);
    imprime_matriz(m, lin, col);
    
    return 0;
}
