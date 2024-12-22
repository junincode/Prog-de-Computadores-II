#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ocorrencia(char* str1, char* str2){
    
    for(int i = 0, j = 0; i < strlen(str1); i++){
        if (tolower(str2[j]) == tolower(str1[i])){
            j++;
            }
        else j = 0;
        if(j == strlen(str2)-1){
            return 1;
        }
        }
    return 0;
    }
    
int main(){
    char str1[30], str2[30];
    printf("str1: ");
    fgets(str1, 30, stdin);
    printf("str2: ");
    fgets(str2, 30, stdin);
    printf("%d", ocorrencia(str1, str2));
    return 0;
}
