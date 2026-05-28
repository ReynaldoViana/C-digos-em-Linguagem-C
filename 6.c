#include <stdio.h>
int main(){
    int u;
    printf("Escolha um número:");
    scanf("%d", &u);
    for(int i = 1; i <= 10; i++){
        printf("A tabuada será: %d x %d = %d\n", u, i, u*i);
    }
return 0;
}