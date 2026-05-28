#include<stdio.h>
float n1, n2, n3, média;
int main(){
    printf ("Escolha um número: \n");
    scanf("%f", &n1);
    printf ("Escolha um número: \n");
    scanf("%f", &n2);
    printf ("Escolha um número: \n");
    scanf("%f", &n3);
    
    média = (n1 + n2 + n3) / 3;
    if( média >= 7){
        printf("Aprovado %.2f\n", média);
    }else if( média >= 5){
        printf(" Recuperação %.2f\n", média);
    }else{
        printf("Reprovado %.2f\n", média);
    }
return 0;
}