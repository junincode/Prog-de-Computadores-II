#include <stdio.h>
#include <stdlib.h>

void pares(int* v, int* n){
    int pares = 0;
    for(int i = 0; i < *(n); i++){
        if(*(v + i) % 2 == 0){
            pares++;
        }
    }
    *(n) = pares;
    return;
}

int main(void){
    int n, v, tam_vet;
    int* pn = &n;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tam_vet);
    
    int* pv = (int*)malloc(tam_vet * sizeof(int));
    for(int i = 0; i < tam_vet; i++){
        printf("v[%d]: ", i);
        scanf("%d", pv + i);
    }
    printf("Digite n menor que tamanho do vetor: ");
    scanf("%d", pn);
    
    pares(pv, pn);
    printf("endereco : %p / valor : %d", (void*)pn, n);
    
    return 0;
}
