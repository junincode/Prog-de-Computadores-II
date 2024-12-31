#include <stdio.h>
#include <stdlib.h>

int main() {
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int* quantas_vogais = (int*) calloc (1, 5 * sizeof(int));
    FILE* arquivo = fopen("arquivo", "r+");
        
    char c = fgetc(arquivo);    
    while(!(feof(arquivo))){
        for(int i = 0; i < 5; i++){
            if(c == vogais[i]){
                (*(quantas_vogais + i))++;
            }
        }    
        c = fgetc(arquivo);
    }
    printf("A=%d\nE=%d\nI=%d\nO=%d\nU=%d\n", quantas_vogais[0], quantas_vogais[1], quantas_vogais[2], 
    quantas_vogais[3], quantas_vogais[4]);
    return 0;
}
