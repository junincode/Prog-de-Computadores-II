#include <stdio.h>

int main(int argc, char argv[]){
    
    
    //Se não houver como utilizar arquivos de entrada via linha de execução
    
    FILE* arq_entrada = fopen("arquivoEntrada", "r+");
    FILE* arq_saida = fopen("arquivoSaida", "w+");
    
    //FILE* arq_entrada = fopen(argv[1], "r+");
    //FILE* arq_saida = fopen(argv[2], "w+");
    

    char c;
    
    
    c = fgetc(arq_entrada);
    while(!(feof(arq_entrada))){
        fprintf(arq_saida, "%c", c);
        c = fgetc(arq_entrada);
    }
    return 0;
}
