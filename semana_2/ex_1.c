#include <stdio.h>

int* aumento(int* p_valor, float percentual){
    *(p_valor) = (*(p_valor)) * percentual;
    return p_valor;
}

int main(){
    int valor;
    int* p_valor = &valor;
    float percentual;
    printf("Digite o salário atual: ");
    scanf("%d", p_valor);
    printf("Digite o aumento desejado: ");
    scanf("%f", &percentual);
    printf("O novo salário eh %d", *(aumento(p_valor, percentual)));

    return 0;
}
