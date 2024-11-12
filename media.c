#include <stdio.h>


int main() {
    float primo_numero;
    float secondo_numero;
    float media;

    printf("\nOggi facciamo la media tra due numeri!");
    printf("\nInserisci il primo numero: ");
    scanf("%f", &primo_numero);
    printf("\nInserisci il secondo numero: ");
    scanf("%f", &secondo_numero);

    media = (primo_numero + secondo_numero) / 2;

    printf("\nLa media tra i due numeri che hai inserito è: %.2f\n", media);

    return 0;
}