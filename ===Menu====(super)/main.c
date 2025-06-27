#include <stdio.h>
// #include <stdlib.h>

int main()
{
int choixdemenu;

printf("===Menu===\n\n");
printf(" 1. haricot\n");
printf(" 2. avocat\n");
printf(" 3. poulet\n");
printf(" 4. pizza\n");
printf(" 5. poisson\n");
printf("\n  Votre choix SVP:");
scanf("%d",&choixdemenu);

switch(choixdemenu)
{
case 1:
printf("\n Bon appetit mon amie\n");
printf("\n N'oubliez pas de faire vos commentaire sur notre page.\n\n");
break;
case 2:
printf("\n J'espere que vous aviez du pain ?\n");
printf("\n N'oubliez pas de faire vos commentaire sur notre page.\n\n");
break;
case 3:
printf("\n Tros cool mon amie\n");
printf("\n N'oubliez pas de faire vos commentaire sur notre page.\n\n");
break;
case 4:
printf("\n Miame Miame\n");
printf("\n N'oubliez pas de faire vos commentaire sur notre page.\n\n");
break;
case 5:
printf("\n pourqoui pas du POULET mon amie\n");
printf("\n N'oubliez pas de faire vos commentaire sur notre page.\n\n");
break;
default:
    printf("\n Desole il n'y rien pous vous mon amie. Allez bye\n" );
    break;
    }
printf("\n A la prochaine...... \n\n\n ");
printf("  ²² Marie-Flaubert ²²\n\n");
    return 0;
 }
