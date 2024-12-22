#include <stdio.h>
#include <stdlib.h>

int max_index(int v[], int tam_vet){
    int max = 0;
    int index_max = 0;
    
    for(int i = 0; i < tam_vet; i++){
        if(*(v + i) > max){
            max = *(v + i);
            index_max = i;
        }    
    }
    return index_max;
}

int main(){
    int tam_vet;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_vet);
    
    int* pv = (int*)malloc(tam_vet * sizeof(int));
    
    for(int i = 0; i < tam_vet; i++){
        printf("v[%d] : ", i);
        scanf("%d", pv + i);
    }
    
    printf("%d", max_index(pv, tam_vet));
    
    return 0;
}
