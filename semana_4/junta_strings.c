#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *concatena(char* frase1, char* frase2){ //junta duas strings
    
    int tam_final = strlen(frase1) + strlen(frase2) - 1;
    char* nova_frase = (char*) malloc (tam_final * sizeof(char));   
    int c = 0, k = 0;
    
    while(*(frase1 + c + 1) != '\0'){
        *(nova_frase + c) = *(frase1 + c);
        c++;
    }
    
    while(*(frase2 + k) != '\0'){
        *(nova_frase + c) = *(frase2 + k);
        k++;
        c++;
    }
    
    return nova_frase;
}

int main(){
    
    char* frase1 = (char*) malloc (50 * sizeof(char));
    char* frase2 = (char*) malloc (50 * sizeof(char));    
    
    printf("Primeira frase: ");
    fgets(frase1, 50, stdin);
    
    printf("Segunda frase: ");
    fgets(frase2, 50, stdin);

    puts(concatena(frase1, frase2));
    
    return 0;
}
