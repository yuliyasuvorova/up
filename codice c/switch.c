#include <stdio.h>

int main()
{
    int scelta;
    //menu che va da 0 a 5
    printf("\nBuongiorno qui il manicomio, prema: \n1 se sei schizofrenico\n2 se sei paranico\n3 se hai bassa autostima\n");
    scanf("%d", &scelta);
    switch(scelta) 
    {
        case 1:
            printf("\nvorremmo parlare con un'altra delle tue personalità");
            break;
        case 2:
            printf("\nti avvisiamo che questa chiamata è condivisa con i poteri forti");
            break;
        case 3:
            printf("\ni nostri operatori stanno parlando con persone più importanti id te");
            break;
        default:
            printf("\ngrazie artur per averci contattato");
    }



    return 0;
}