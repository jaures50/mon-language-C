#include <stdio.h>
#define coucou() printf("\n\t²² Quelques definition pour toi petit ²² \n");

int main(int argc, char* argv[] )
 {
     {
     coucou()
        }
        {
            int dada;
            printf("\n 1. Gouja\n");
            printf("\n 2. Goujon\n");
            scanf("%d",dada);
            switch(dada)
             {
            case 1 :
            printf("Enfant mal eleve\n");
            break;
            case 2:
            printf("Petit poisson\n");
            break;
            default:
                printf("Tu a autre numero que les deux soit vivant mon frere\n");
                break;
                }

    return 0;
    }
}
