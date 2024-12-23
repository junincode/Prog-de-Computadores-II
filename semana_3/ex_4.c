#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (){
    
    int *i, j;
    float *notas;
    char *nome, *nome2;
    
    i = &j;
    
    scanf("%d", &j); // 1° forma
    
    printf("%d\n", *i);
    
    scanf("%d", i); // 2° forma
    
    printf("*i = %d // j = %d", *i, j);
    
    
    notas = (float*)malloc(5 * sizeof(float));
    for(int i = 0; i < 5; i++){
        printf("notas[%d] : ", i);
        scanf("%f", notas + i);
        printf("%.2f\n", *(notas + i));
    }
    
    
    nome = (char*) malloc (50 * sizeof(char)); //STR
    
    fgets(nome, 50, stdin);
    
    int c = 0;
    while(*(nome + c) != '\0'){
        *(nome+c) = tolower(*(nome + c));
        c++;
    }
    puts(nome);
    
    nome2 = (char*) malloc (50 * sizeof(char)); //SUBSTR
    
    fgets(nome2, 50, stdin);
    
    int k = 0;
    while(*(nome2 + k) != '\0'){
        *(nome2+k) = tolower(*(nome2 + k));
        k++;
    }
    puts(nome2);
    
    
    c = 0, k = 0;
    while(*(nome + c) != '\0'){
        if (*(nome2 + k) == *(nome + c)){
            k++;
        } 
        else k = 0;
        c++;
        if (strlen(nome2)-1 == k){
            printf("Existe!");
            break;
        }
    }
    
    printf("%ld %ld", strlen(nome), strlen(nome2));
    

}
    
