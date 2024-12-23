#include <stdio.h>

#define DIM 3

void inicM(int m[DIM][DIM]){
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            *(m[i] + j) = 0;
        }
    }
}

void exibirM(int m[DIM][DIM]){
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            //printf("Posição [%d] [%d] = %d no endereco %p\n", i, j, m[i][j], am[i] + j);
            printf("[ %d ]", m[i][j]);
        }
        printf("\n");
    }
}

int incluiElem(int m[DIM][DIM], int i, int j, int num){
    return m[i][j] = num;
}

int main(){
    int m[DIM][DIM];
    inicM(m);
    exibirM(m);
    incluiElem(m, 1, 2, 10);
    printf("\n");
    exibirM(m);
    return 0;
}
