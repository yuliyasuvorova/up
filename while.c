#include <stdio.h>

int main() 
{
    int n = 5;
    int fattoriale = 1;
    while (n > 0){
        fattoriale = fattoriale * n;
        n--;
    }
    printf("\nfattoriale = %d", fattoriale);
    char c = 'a';
    while (c != 'v');{
        printf("\npremi v: ");
         scanf("%c", &c);
        if (c != 'v') {
            printf("\nho detto v!!!");
        }
    }
    return 0;
} 
