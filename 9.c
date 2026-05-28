#include <stdio.h>
int main(){
    int n1, maior;
    printf("Escreve um número:\n");
    scanf("%d", &maior);
    for(int i = 2; i <= 8; i++){
        printf("Escreve um número:\n");
        scanf("%d", &n1);
        if(n1 > maior){
            maior = n1;
        }
    }
printf("Maior número: %d\n", maior);
return 0;
}