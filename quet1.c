#include <stdio.h>
#include <math.h>

int num, quadrado, rest, cubo;
double raizq,raizc;

int main() {
    while (num<=0){
        printf("----------------------------------------------------------------\n");
        printf("Digite um número maior que 0: \n");
        scanf("%d", &num);
        printf("----------------------------------------------------------------\n");
        if (num<=0){
            printf("-------------------------ALERTA-----------------------\n");
            printf("Digite outro numero,como informei deve ser maior que 0\n");
        }
    }
    // Operações que serão realizadas:

    quadrado = pow(num, 2);
    cubo = pow(num, 3);
    raizq = sqrt(num);
    raizc = cbrt(num);
    rest = num % 3;

    printf("* %d ao quadrado é igual a %d\n", num, quadrado);
    printf("________________________________________________________\n");
    printf("* %d ao cubo é igual a %d\n", num, cubo);
    printf("________________________________________________________\n");
    printf("* A raiz quadrada de %d é igual a %.2lf\n", num, raizq);
    printf("________________________________________________________\n");
    printf("* A raiz cúbica de %d é igual a %.2lf\n", num, raizc);
    printf("________________________________________________________\n");
    printf("* O resto da divisão de %d por 3 é %d\n", num, rest);
    printf("________________________________________________________\n");

    return 0;
}
