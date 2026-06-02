#include <stdio.h>
int dobro(int numero){
    return numero *2;
}

int main(){
int n, resultado;
printf("Digite um valor: \n");
scanf("%d", &n);
resultado = dobro(n);
printf("O dobro de %d é %d\n", n, resultado);
return 0;
}