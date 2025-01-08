#include <stdio.h>

int main(int argc, int argv[]){
    char n_aqventrada[30], n_arqsaida[30], c, frase[201];
    
    printf("Nome do arquivo de entrada: ");
    scanf("%s", n_aqventrada);
    printf("Nome do arquivo de saída: ");
    scanf("%s", n_arqsaida);
    
    FILE* arq_entrada = fopen(n_aqventrada, "r+");
    FILE* arq_saida = fopen(n_arqsaida, "w+");
    
    c = fgetc(arq_entrada);
    int cont = 0;
    
    while(c != EOF){

        while(c != '\n' && c != EOF){ // lê os caracteres de uma linha, até encontrar \n
            frase[cont] = c;
            cont++;
            c = fgetc(arq_entrada);
        }
        
        while(cont != 0){   // Pega os caracteres lidos acima e escreve no arquivo de saída na ordem contrária
            fprintf(arq_saida, "%c", frase[cont - 1]);
            cont--;
        }
        
        fprintf(arq_saida, "\n");
        
        if(c != EOF){
            c = fgetc(arq_entrada);
        }
        
    }
    return 0;
}




