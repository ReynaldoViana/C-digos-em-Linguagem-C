#include <stdio.h>
int main(){
    int n1, pares = 0;
    for(int i = 1; i <= 10; i++){
        printf("Escreva 1 número:");
        scanf("%d", &n1);
        if(n1 %2 == 0){
            pares ++; 
        }
    }
printf("A quantidade de pares: %d\n", pares);
return 0;
}