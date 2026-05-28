#include <stdio.h>
float n1, n2, média;
int main(){
    printf("Escolha um valor\n");
    scanf("%f", &n1);
     printf("Escolha outro valor\n");
    scanf("%f", &n2);

    média = (n1 + n2) / 2;
    printf("A média será: %.2f", média);
    return 0;
}