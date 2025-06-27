#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
   {

    int nombremystere = 0, nombreentrer = 0, ZO = 0, GB = 0, Nombremystere = 0, nombreMystere = 0;
    const int Max = 100, Min = 1, Maxi = 1000, Mini = 1, mqx = 10000, mqi = 1;
    srand((time)NULL);

    nombremystere = (rand()%(Max-Min+1))+Min;
    Nombremystere = (rand()%(Maxi-Mini+1))+Mini;
    nombreMystere = (rand()%(mqx-mqi+1))+Min;
    nombremystere = (rand()%(Max-Min+1))+Min;
    printf("\n          Plus ou Moins           \n");
    printf("\n Deviner le nombre mystere\n\n");
    printf("\n 1. jouer seul: niveau facile\n");
    printf("\n 2. jouer seul: niveau moyen\n");
    printf("\n 3. jouer seul: niveau difficile\n");
    printf("\n 4. jouer a deux \n");
    scanf("%d",&ZO);
    switch(ZO)
    {
        {
        case 1:

            do
            {
                printf("\n Quel est le nombre mystere ?\n");
                scanf("%d",&nombreentrer);
                if(nombreentrer < nombremystere)
                    printf(" \n Le nombre mystere est superieur a votre nombre \n");
                else if(nombreentrer > nombremystere)
                    printf("\n Votre nombre est superieur au nombre mystere\n");
                else
                    printf("\n Brovo vous avez trouver le nombre mystere qui est %d \n",nombreentrer);
            }
            while(nombreentrer!= nombremystere);
            printf("\n\n N'oubliez pas mon argent SVP. Merci d'avance \n\n ");
            printf("\n\n ©÷©÷    Marie-Flaubert ZOGBA    ©÷©÷\n\n");
            break;
        case 2:
             do
            {
                printf("\n Quel est le nombre mystere ?\n");
                scanf("%d",&nombreentrer);
                if(nombreentrer < nombremystere)
                    printf(" \n C'est plus\n");
                else if(nombreentrer > Nombremystere)
                    printf("\n c'est moins\n");
                else
                    printf("\n Brovo vous avez trouver le nombre mystere\n");
            }while(nombreentrer!= Nombremystere);
            printf("\n\n N'oubliez pas mon argent SVP. Merci d'avance \n\n ");
            printf("\n\n    ²² Marie-Flaubert ZOGBA ²²    \n\n");
            break;
        case 3:
             do
            {
                printf("\n Quel est le nombre mystere ?\n");
                scanf("%d",&nombreentrer);
                if(nombreentrer < nombreMystere)
                    printf(" \n C'est plus\n");
                else if(nombreentrer > nombreMystere)
                    printf("\n c'est moins\n");
                else
                    printf("\n Brovo vous avez trouver le nombre mystere\n");
            }
            while(nombreentrer!= nombreMystere);
            printf("\n\n N'oubliez pas mon argent SVP. Merci d'avance \n\n ");
            printf("\n\n ©÷©÷    Marie-Flaubert ZOGBA    ©÷©÷\n\n");
            break;
        case 4:
             do
            {
                printf("\n Quel est le nombre mystere ?\n");
                scanf("%d",&nombreentrer);
                if(nombreentrer < nombremystere)
                    printf(" \n C'est plus\n");
                else if(nombreentrer > nombremystere)
                    printf("\n c'est moins\n");
                else
                    printf("\n Brovo vous avez trouver le nombre mystere\n");
            }
            while(nombreentrer!= nombremystere);
            printf("\n\n N'oubliez pas mon argent SVP. Merci d'avance \n\n ");
            printf("\n\n ©÷©÷   Marie-Flaubert ZOGBA   ©÷©÷\n\n");
            break;
        default:
            printf("\n Desole vous ne jouer pas \n");
            break;
        }

 }}



