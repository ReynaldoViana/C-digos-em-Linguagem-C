#include<stdio.h>
float n1, n2, adição, subtração, produto, divisão;
int resultado;
int main(){
    printf("Escolha dois números:\n");
    scanf("%f%f", &n1, &n2);
    printf("escolha uma opção:\n");
    printf("[1] Adição:\n");
    printf("[2]Subtração\n");
    printf("[3]multiplicação\n");
    printf("[4]divisão\n");
    scanf("%d", &resultado);
    switch(resultado){
        case 1:
        adição = n1 + n2;
        printf("O resultado será: %.2f", adição);
        break;
        case 2:
        subtração = n1 - n2;
        printf("O resultado será: %.2f", subtração);
        break;
        case 3:
        produto = n1 * n2;
        printf("O resultado será: %.2f", produto);
        break;
        case 4:
        divisão = n1 / n2;
        if(n2 ==0){
            printf("Operação não realizada");
        }else{
            printf("O resultado será: %.2f", divisão);
        }
        break;
    default:
    printf("Opção inválida");
    }


    return 0;

}