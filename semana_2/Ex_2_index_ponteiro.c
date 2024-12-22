#include <stdio.h>
#include <string.h>
#include <ctype.h>

int n_vogais_index(char str1[]){
    int vogais = 0;
    for(int i = 0; i < strlen(str1); i++){
        if(tolower((str1[i])) == 'a' || tolower((str1[i])) == 'e' || tolower((str1[i])) == 'i' || tolower((str1[i])) == 'o' || tolower((str1[i])) == 'u')
        vogais++;
}
    return vogais;
}

int n_vogais_ponteiro(char str1[]){
    int vogais = 0;
    for(int i = 0; i < strlen(str1); i++){
        if(tolower((*(str1 + i))) == 'a' || tolower((*(str1 + i))) == 'e' || tolower((*(str1 + i))) == 'i' || tolower((*(str1 + i))) == 'o' || tolower((*(str1 + i))) == 'u'){
        vogais++;
    }
}
    return vogais;
}


int main(){
    char str1[30];
    printf("Digite sua frase: ");
    fgets(str1, 30, stdin);
    printf("%d\n", n_vogais_index(str1));
    printf("%d", n_vogais_ponteiro(str1));

    return 0;
}
