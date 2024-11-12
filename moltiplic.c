#include <stdio.h>

int main() {
    int primo_numero;
    int secondo_numero;
    int risultato_molt;
    

    printf("\nOggi facciamo una moltiplicazione tra due numeri!");
    printf("\nInserisci il primo numero: ");
    scanf("%d", &primo_numero);
    printf("\nInserisci il secondo numero: ");
    scanf("%d", &secondo_numero);

    risultato_molt = primo_numero * secondo_numero;

    printf("\nIl risultato della moltiplicazione tra i numeri che hai inserito è: &d\n", risultato_molt);

    return 0;
}