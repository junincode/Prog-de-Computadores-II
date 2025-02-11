
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    int idade;
} Tpessoa;

int grava(FILE* pFile, int n){
    
    for(int i = 0; i < n; i++){
        Tpessoa* aux = malloc(sizeof(Tpessoa));
        printf("Nome: ");
        scanf("%s", aux->nome);
        
        printf("Idade: ");
        scanf("%d", &aux->idade);
        
        fwrite(aux, sizeof(Tpessoa), 1, pFile);
        
    }
}

void exibe(FILE* pFile){
    
    fseek(pFile, 0, SEEK_CUR);
    long size = ftell(pFile);
    int quantidade = size / sizeof(Tpessoa);
    rewind(pFile);
    
    printf("\n\n==========================\n");
    
    Tpessoa* aux;
    
    while(fread(aux, sizeof(Tpessoa), 1, pFile) == 1){
        printf("NOME: %s\n", aux->nome);
        printf("IDADE: %d\n", aux->idade);
        printf("==========================\n");
    }
}

int modifica(FILE* pFile, int m, int idade){
    fseek(pFile, (m - 1) * sizeof(Tpessoa), SEEK_SET);
    Tpessoa* aux;
    if(fread(aux, sizeof(Tpessoa), 1, pFile) != 1){
        printf("erro ao ler o arquivo.");
        return -1;
    }
    else{
        aux->idade = idade;
    }
    fseek(pFile, (m - 1) * sizeof(Tpessoa), SEEK_SET);
    
    return fwrite(aux, sizeof(Tpessoa), 1, pFile);
    
}
int main(){
    
    FILE* arquivo = fopen("arquivo.dat", "w+");
    grava(arquivo, 4);
    modifica(arquivo, 3, 10);
    exibe(arquivo);
    fclose(arquivo);
    
    return 0;
}

