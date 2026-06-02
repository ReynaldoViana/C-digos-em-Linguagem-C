#include <stdio.h>
float media(float n1, float n2){
return (n1 + n2)/2;
}
int main(){
    float v1, v2, resultado;
    printf("Digite Dois Valores: \n");
    scanf("%f%f", &v1, &v2);
    resultado = media(v1, v2);
    printf("A média será: %.2f\n", resultado);
    return 0;
}