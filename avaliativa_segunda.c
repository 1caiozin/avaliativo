#include <stdio.h>

int main (){
    int numero;
    int digito;
    int soma;

    soma == 0;

    printf("digite um numero inteiro:\n");
    scanf("%d", &numero);

if(numero %2 == 0){
    printf("d% eh par\n", numero);
}
else {
    printf("%d eh impar\n", numero);
}
while (numero != 0) {
        digito = numero % 10; 
        soma += digito;       
        numero /= 10;         
    }

    printf("a soma dos algarismos eh: %d\n", soma);




    return 0;
}