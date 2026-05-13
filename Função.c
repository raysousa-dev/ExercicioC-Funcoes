#include <stdio.h>
#include <stdlib.h>

void calcularTempo(int totalSegundos) {

    int h, m, s;

    h = totalSegundos / 3600;
    m = (totalSegundos % 3600) / 60;
    s = totalSegundos % 60;

    printf("Tempo: %d h : %d m : %d s\n", h, m, s);
}

int par(int num) {

    if(num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int impar(int num) {

    if(num % 2 != 0) {
        return 1;
    } else {
        return 0;
    }
}

float media(float n1, float n2) {

    float resultado;

    resultado = (n1 + n2) / 2;

    return resultado;
}

int maior(int a, int b) {

    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int menor(int a, int b) {

    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {

    int segundos;
    int numero;
    int a, b;
    float n1, n2;

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    calcularTempo(segundos);

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if(par(numero)) {
        printf("O numero e par!\n");
    } else {
        printf("O numero e impar!\n");
    }

    printf("\nDigite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    printf("Media = %.2f\n", media(n1, n2));

    printf("\nDigite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Maior = %d\n", maior(a, b));
    printf("Menor = %d\n", menor(a, b));

    system("pause");

    return 0;
}