#include <stdio.h>
#include <stdlib.h>

void airedetriangle(double longueur, double largeur)
 {
    double aire = 0;
    aire = longueur * largeur;
    printf("\n Rectangle de longueur %f et de largeur %f. aire = %f\n",longueur, largeur, aire);
    }

        int main (int argc, char * argv[])
        {
        airedetriangle(9,5);
        airedetriangle(5,3);
        airedetriangle(10,5);
        printf("\n\n     ²² Marie-Flaubert ²²    \n\n");

    return 0;
}
