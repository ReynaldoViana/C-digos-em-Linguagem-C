#include <stdio.h>
float n1, n2;
int main(){
    printf("Escolha um número: \n");
    scanf("%d", n1);
    printf("Escolha um número: \n");
    scanf("%d", n2);

    if(n1 == n2){
        printf(" %d são números iguais", n1);

    }

    if(n1 > n2){
        printf(" %d É maior número", n1);
    }else{
        printf ("%d É o maior valor", n2);
    }
    
return 0;
}
