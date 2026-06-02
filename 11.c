#include <stdio.h>
float n1, horas;
int main(){
    printf("Digite o tempo em segundos:\n");
    scanf("%f", &n1);
    horas = n1 / 3600;
    printf("O tempo será: %.2f", horas);
    return 0;
}