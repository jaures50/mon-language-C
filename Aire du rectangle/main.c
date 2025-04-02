#include <stdio.h>
#include <stdlib.h>

double airedurectangle(double longueur, double largeur)
{
    return longueur * largeur;
}
int main(int argc, char * argv[])
    {
    printf("Un rectangle de longueur 5 et de lageur 3 vaut %f\n",airedurectangle(5, 3));
    printf("\n Un triangle de longueur 9 et de largeur 5 vaut %f\n",airedurectangle(9,5));
    printf("%f",airedurectangle(123,10));
    }
