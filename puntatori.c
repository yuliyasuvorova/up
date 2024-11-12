#include <stdio.h>

void scrivi_vettore(int *ptr){
    for(int i=0; i < 10; i++){
        printf("inserisci n[%d]: ");
        scanf("%d", ptr);
        ptr++;
    }

}
void leggi_vettore(int *ptr){
    for(int i=0; i<10; i++){
        printf("\nelemento n[%d] = %d (zona memoria 0x%x)", i, *ptr, ptr);
        ptr++;
    }

}

int main(){ 
    int n[10] = {0}; 
    int *n_ptr;

    n_ptr = &n[0];

    scrivi_vettore(n_ptr);
    leggi_vettore(n_ptr);
}