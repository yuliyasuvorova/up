#include <stdio.h>

int main()
{
    int primo;
    int secondo;
    int risultato;

    printf("\nInserisci il primo numero: ");
    scanf("%d", &primo);
    printf("\nInserisci il secondo numero: ");
    scanf("%d", &secondo);
    
    //per assegnare la variabile risultato = primo + secondo;
    
    //printf("\nLa somma dei due numeri è: %d\n", risultato);
    //printf("\nLa differenza dei due numeri è: %d\n", primo - secondo);
    printf("\nLa moltiplicazione tra i due numeri è: %d\n", primo * secondo);
    //printf("\nLa divisione tra i due numeri è: %d", primo / secondo);
    //printf("\nIl modulo tra i due numeri è: %d", primo % secondo);
    printf("\nla media aritmetica tra i due numeri è :", (primo+secondo)/2 )


    return 0;
}
//oppure la somma %d + %d = %d\n, primo, secondo, risultato