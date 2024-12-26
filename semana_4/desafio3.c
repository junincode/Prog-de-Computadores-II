/* • Sua tarefa é escrever um programa que, dado um mapa da plantação contendo o
número de margaridas prontas para venda em cada vaso, encontre qual o número
máximo de margaridas que podem ser colhidas por Leopoldo (em um único lote).
• Entrada. A entrada contém um único conjunto de testes que deve ser lido do
dispositivo de entrada padrão. A primeira linha da entrada contém quatro
números inteiros, L, C, M e N. L e C representam respectivamente o número de
linhas (L>=1) e de colunas (C>=1) de vasos existentes na plantação. M e N
representam respectivamente o número de linhas (1<=M<=L) e de colunas
(1<=N<=C) dos lotes. As L linhas seguintes contêm C inteiros cada, representando
o número de margaridas prontas para colheita no vaso localizado naquela linha e
coluna. Note que L /M e C/N são sempre inteiros, pois não há linha ou coluna de
vasos que pertença a mais de um lote.
• Saída. Seu programa deve imprimir, na saída padrão, uma única linha que contém
o número máximo de margaridas que podem ser colhidos em um lote de M x N.*/

#include <stdio.h>

int main(){
    
    int l, c, m, n;
    
    printf("Digite [L | C | M | N]: ");
    scanf("%d %d %d %d", &l, &c, &m, &n);
    
    int p[l][c], maior = 0, auxmaior = 0;
    // preenchendo a matriz plantação
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &p[i][j]);
        }
    }
    printf("\n");
    
    // imprimindo a matriz
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("[ %d ]", p[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
        
    // procurando o maior lote
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            
            for(int cl = i; cl < i + m; cl++){
                
                if(i + m > l){
                    break;
                }
                
                for(int cc = j; cc < j + n; cc++){
                    
                    if(j + n > c){
                        break;
                    }

                    
                    printf("Analisei p[%d][%d]\n", cl, cc);
                    
                    auxmaior += p[cl][cc];
                }
            }
            
            printf("\n\n");
            if (auxmaior > maior){
                maior = auxmaior;
            }
            auxmaior = 0;
        }
    }
    
    printf("%d", maior);

    return 0;
}
