#include <stdio.h>
int n1
int main(){
    printf("O escolha um número \n");
    scanf("%d", &n1);
    if(n1 %2 == 0){
        printf("o numéro %d é Par", n1);
    }else{
        printf("O número %d é ímpar", n1);
    }
return 0;
}