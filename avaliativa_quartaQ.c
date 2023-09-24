#include <stdio.h>

int main(){
    char nivel;
    double salario;
    double aumento;

    printf("informe o nivel de experiencia (a, b ou c): \n");
    scanf(" %c", &nivel);

    printf("informe o salario atual: \n");
    scanf("%lf", &salario);

    if (nivel == 'a') {
        aumento = salario * 0.05;
    } 
    else if (nivel == 'b') {
        aumento = salario * 0.07;
    } 
    else if (nivel == 'c') {
        aumento = salario * 0.08;
    } 
    else {
        printf("nivel de experiencia invalido.\n");
        return 1;
    }

    double novo_salario = salario + aumento;

    printf("seu novo salario eh: %.2lf\n", novo_salario);



    return 0;
}
