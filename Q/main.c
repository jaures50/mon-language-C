#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ba = 0, da = 0; int T = 0;

                printf("\n Votre nombre mystere ?\n");
                scanf("%d",&ba);
      do
            {
                printf("Quel est le nombre ");
                scanf("%d",da);
                if(ba < da)
                    printf(" \n  Le nombre mystere est superieur a votre nombre\n");
                    else if (ba > da)
                        printf("azeerty");
                else
                    printf("\n Brovo vous avez trouver le nombre mystere qui est %d\n",ba);
                    T = T + 1;
                    printf("vous avez faire %d",T);
            }
            while(ba!= da);
            printf("\n\n N'oubliez pas mon argent SVP. Merci d'avance \n\n ");
            printf("\n\n ©÷©÷   Marie-Flaubert ZOGBA   ©÷©÷\n\n");



    return 0;
}
