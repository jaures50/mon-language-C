#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int choixdemenu = 0;
    printf("\n===Menu===\n\n");
    printf("\n 1.Gari\n");
    printf("\n 2.tomate\n");
    printf("\n 3.cafe\n");
    printf("\n 4.salade\n");
    printf("\n votre choix SVP :"  );
    scanf("%d", &choixdemenu);
    printf("\n");
    switch(choixdemenu)
     {
    case 1:
    printf("tres bon choix vous connaissez sa valeur\n");
    break;
    case 2:
        printf("Oh vous allez faire de la sauce \n");
        break;
    case 3:
        printf("Pour le debut de la journnee, c'est bien tres bon choix mon amie.Bonne journee.\n");
        break;
    case 4:
        printf("je peux vous acompagnez pour........\n");
        break;
    default:
        printf("azertty  ( Hors sujet mon amie)\n");
        break;
        printf("%d");
    }
    printf("\n\n");
    return  ;
 }
