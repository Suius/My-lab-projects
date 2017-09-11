#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    float K, F, C, Temperature;
    char Letter;
    scanf("%f %c", &Temperature , &Letter);
    switch (Letter)
    {
       case 'c':
       case 'C':
           F = Temperature *9/5 + 32;
           if (Temperature == 0)
           {
               K=0;
           }
           else
           {
               K = Temperature + 273.15;
           }
           printf ("%.2f F\n%.2f K\n", F, K);
           break;
       case 'F':
       case 'f':
           C = (Temperature-32)*5/9;
           if (C==0)
           {
               K=0;
           }
           else
           {
               K = C + 273.15;
           }
           printf("%.2f C\n%.2f K\n", C, K);
           break;
       case 'k':
       case 'K':
           if(Temperature == 0)
           {
               C=0;
           }
           else
           {
               C = Temperature - 273.15;
           }
           F = C * 9/5 + 32;
           printf("%.2f C\n%.2f F\n", C, F);
           break;
       default:
           F = Temperature * 9/5 + 32;
           K = Temperature + 273.15;
           printf ("%.2f C\n%.2f F\n%.2f K\n",Temperature , F, K);
           break;
    }
    return 0;
}
