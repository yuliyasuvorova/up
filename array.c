#include <stdio.h>

int main() 
{
    int numeri[3];
    numeri[0]=1;
    numeri[1]=4;
    numeri[2]=89;
    printf("0x%x = %d\n", &numeri[2], numeri[2]);
    //0x%x = zona di memoria in cui viene scritto il numero

    int altri_numeri[] = {1, 4, 3, 57, 6, 3};
    printf("0x%x = %d\n", &altri_numeri[3], altri_numeri[3]);

    float decimali[]={1.5, 2.75, 3.14};
    printf("0x%x = %f\n", &decimali[0], decimali[0]);
    return 0;
}