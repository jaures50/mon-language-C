#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
  {

    int nombremystere = 0 ;
    int nombreentrer = 0;
     int ZO = 0;
     int GB = 0 ;
      int Nombremystere = 0;
       int nombreMystere = 0;
        int ba = 0;
         int da = 0;
         int T = 0;
         int Z = 0;
        int J = 0;
         int M = 0;
    const int Max = 100;
     const int Min = 1;
      const int Maxi = 1000;
      const int Mini = 1;
        const int mqx = 10000;
        const int mqi = 1;
    srand((time)NULL);

    nombremystere = (rand()%(Max-Min+1))+Min;// calcul perssonel de l'ordinateur pour le cas 1;
    Nombremystere = (rand()%(Maxi-Mini+1))+Mini;// calcul perssonel de l'ordinateur pour le cas 2
    nombreMystere = (rand()%(mqx-mqi+1))+Min;// calcul perssonel de l'ordinateur pour le cas 3
    printf("\n\t Plus ou Moins \n");
    printf("\n Deviner le nombre mystere\n\n");
    printf("\n 1. Jouer seul: niveau facile; \n");
    printf("\n 2. Jouer seul: niveau moyen; \n");
    printf("\n 3. Jouer seul: niveau difficile; \n");
    printf("\n\t Votre choix : \t");
    scanf("%d",&ZO);
    if (ZO == 3)
        printf("\n\n BONNE CHANCE A VOUS \n\n");
    else
        printf("\n\n Allons-y \n\n");
    switch(ZO)
    {
        {
        case 1:
            printf("\n Niveau Facile nombre compris entre 1 a 100 \n\\n");
                do
    {
                printf("\n Quel est le nombre mystere ?\t\n");
                scanf("%d",&nombreentrer);
                if(nombreentrer < nombremystere)// la condition
                    printf(" \n Le nombre mystere est superieur a %d\n",nombreentrer);
                else if(nombreentrer > nombremystere) // encore une condition
                    printf("\n Le nombre mystere est infereur a %d \n",nombreentrer);
                else
                    printf("\n Brovo vous avez trouver le nombre mystere qui est %d \n",nombreentrer);
                    T = T + 1;// calcul le nombre d'essaie
    }while(nombreentrer!= nombremystere);
            printf("\n\n N'oubliez pas mon argent SVP. Merci d'avance \n\n ");
            printf(" \n\n  vous avez faire %d d'essaie \n\n",T);// afficher le nombre d'essaie
            printf("\n\n ©÷©÷    Marie-Flaubert ZOGBA    ©÷©÷\n\n");
            break;
        case 2:
            printf("\n Niveau Moyen nombre compris entre 1 a 1000");
             do
            {
                printf("\n Quel est le nombre mystere ?\n");
                scanf("%d",&nombreentrer);
                if(nombreentrer < Nombremystere)
                    printf(" \n  Le nombre mystere est superieur a %d \n",nombreentrer);
                else if(nombreentrer > Nombremystere)
                    printf("\n Le nombre myustere est infereur a %d\n",nombreentrer);
                else
                    printf("\n Brovo vous avez trouver le nombre mystere qui est %d\n,Nombremystere");
                    Z = Z + 1;
            }while(nombreentrer!= Nombremystere);
            printf("\n\n N'oubliez pas mon argent SVP. Merci d'avance \n\n ");
            printf("\n\n Vous avez faire %d essaie(s)",Z);
            printf("\n\n    ²² Marie-Flaubert ZOGBA ²²    \n\n");
            break;
        case 3:
            printf("\n Niveau Difficile nombre compris entre 1 a 10000");
             do
            {
                printf("\n Quel est le nombre mystere ?\n");
                scanf("%d",&nombreentrer);
                if(nombreentrer < nombreMystere)
                    printf(" \n Le nombre mystere est superieur a %d\n",nombreentrer);
                else if(nombreentrer > nombreMystere)
                    printf("\n Le nombre mystere est inferieur a %d \n",nombreentrer);
                else
                    printf("\n Brovo, Bravo et Bravo  vous avez trouver le nombre mystere qui est %d\n",nombreentrer);
                    J = J + 1;
            }while(nombreentrer!= nombreMystere);
            printf("\n\n N'oubliez pas mon argent SVP. Merci d'avance \n\n ");
            printf("Vous avez faire %d essaie(s) ",J);
            printf("\n\n ©÷©÷    Marie-Flaubert ZOGBA    ©÷©÷\n\n");
            break;

        default:
            printf("\n Desole vous ne jouer pas \n");
            break;
        }

 }}



