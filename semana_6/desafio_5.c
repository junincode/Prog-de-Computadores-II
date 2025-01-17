#include <stdio.h>
#include <string.h>

int main(){
    
    char nome_do_arquivo[50], nome_menor_tempo[101];
    int atletas, corridas, menor_tempo = 0;
    
    
    FILE* arquivo = fopen("arquivo_entrada", "r+");
    
    fscanf(arquivo, "%d %d", &atletas, &corridas);
    
    for(int i = 0; i < atletas; i++){
        
        char aux_nome[101];
        int aux_tempo = 0;
        
        fscanf(arquivo, "%s", aux_nome);
        
        for(int j = 0; j < corridas; j++){
            int hora, minuto, seg;
            fscanf(arquivo, "%d %d %d", &hora, &minuto, &seg);
            aux_tempo += hora * 3600 + minuto * 60 + seg;
        }
        
        if(i == 0 || aux_tempo < menor_tempo){
                menor_tempo = aux_tempo;
                strcpy(nome_menor_tempo, aux_nome);
            }
            
    }
    printf("%s = %d segundos", nome_menor_tempo, menor_tempo);
    
    return 0;
}
