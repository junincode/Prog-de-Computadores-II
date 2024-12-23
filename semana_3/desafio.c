#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hora, minuto;
} t_Momento;

void tempoAtual(int percorrido, t_Momento *momento){
    momento->minuto += percorrido;
    if (momento->minuto >= 60){
        momento->hora += momento->minuto / 60;
        momento->minuto = momento->minuto % 60;
    }
    printf("Novo instante calculado: %dh%dmin\n", momento->hora, momento->minuto);
    printf("Em minutos: %d\n", momento->hora*60 + momento->minuto);
}

int main(){
    
    int testes, min_passados;
    printf("Quantos testes quer fazer? ");
    scanf("%d", &testes);
    
    for(int i = 0; i < testes; i++){
        t_Momento *aux = (t_Momento*) malloc (sizeof(t_Momento));
        printf("[%d] -----------------------------------\n", i+1);
        printf("Indique um momento em [hora] / [minuto]: ");
        scanf("%d %d", &aux->hora, &aux->minuto);
        printf("Indique quanto tempo [minutos] se passaram: ");
        scanf("%d", &min_passados);
        tempoAtual(min_passados, aux);
        printf("---------------------------------------\n\n");
    }
    return 0;
}
