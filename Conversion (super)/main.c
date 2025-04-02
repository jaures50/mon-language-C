#include <stdio.h>
#include <stdlib.h>
double conversion (double euro)
  {
double francs = 0;
francs =  6.55957 * euro;
return francs;
 }
 int main(int argc, char *argv[])
 {
     printf("\n\n%f", conversion (10));
     printf("\n 100 euro = %f F\n", conversion(100));
     printf("\n 10000 euro = %f F\n",conversion(10000));
     printf("\n 50 euro = %f F\n",conversion(50));
     printf("\n 200 euro = %f F \n",conversion(200));
     printf("\n\n    ²² Marie-Flaubert ²²    \n\n");
     return 0;

     }
