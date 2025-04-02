#include <stdio.h>
#include <stdlib.h>

void pionter(int *pointerh, int *pointerm);
int main(int argc, char *argv[])
 {
    int heure = 0, minute = 90;
    pionter(&heure,&minute);
    printf("\n %d heure(s) et %d munute(s)\n",heure,minute);
    printf("\n\n     ²² Marie-Flaubert ²²    \n\n");
    return 0;
 }

     void pionter (int *pointerh, int *pointerm)
     {
         *pointerh = *pointerm / 60;
         *pointerm = *pointerm % 60;
         }
