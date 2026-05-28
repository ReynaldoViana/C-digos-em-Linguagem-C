#include <stdio.h>
int main(){
int n;
int soma = 0;
    printf("Escolha um número:");
scanf("%d", &n);
for(int i = 1; i <= 5; i++){
    soma = soma + n;
}
printf("A soma será: %d\n", soma);
return 0;
}