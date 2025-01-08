#include <stdio.h>
#include <string.h>

int main(){
    FILE* arquivo = fopen("arquivo", "r+");
    int cont = 0, linha, achou_palavra, linha_procurada;
    char palavra_procurada[20], c, frase[81], frase_procurada[81];
    printf("Qual palavra deseja procurar? ");
    scanf("%s", palavra_procurada);
    
    c = getc(arquivo);
    linha = 1;
    while(c != EOF){
        
        cont = 0;
        int j = 0;        
        while(c != '\n' && c != EOF){
            
            if(palavra_procurada[j] == c){
                j++;
            }
            
            else j = 0;
            
            if(j == strlen(palavra_procurada) - 1){
                achou_palavra = 1;
                linha_procurada = linha;
            }
            
            frase[cont] = c;
            cont++;
            c = getc(arquivo);
        }
        
        if(achou_palavra){
            c = EOF;
            strcpy(frase_procurada, frase);
        }
        
        linha++;
        
        if(c != EOF){
        c = getc(arquivo);
        }
        
        frase[cont] = '\0';
    }
    if(achou_palavra){
        printf("Palavra -= %s =- encontrada na frase -= %s =- de número %d", palavra_procurada, frase_procurada, linha_procurada);
    }
    else printf("Sua palavra não foi encontrada...");
    return 0;
}