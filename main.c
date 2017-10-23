#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    float K, F, C, Temperature;
    char Letter;
    scanf("%f", &Temperature);
    scanf("%c", &Letter);
    switch (Letter)
    {
       case 'c':
       case 'C':
           if (Temperature <= -273.15)
           {
               printf("This is impossible");
           }
           else
           {
               F = Temperature *9/5 + 32;
               K = Temperature + 273.15;
               printf ("%.2f F\n%.2f K\n", F, K);
           }
           break;
       case 'F':
       case 'f':
           if (Temperature<=-469.27)
           {
               printf("This is impossible");
           }
           else
           {
               C = (Temperature-32)*5/9;
               K = C + 273.15;
               printf("%.2f C\n%.2f K\n", C, K);
           }
           break;
       case 'k':
       case 'K':
           if (Temperature <= 0)
           {
               printf("This is impossible");
           }
           else
           {
               C = Temperature - 273.15;
               F = C * 9/5 + 32;
               printf("%.2f C\n%.2f F\n", C, F);
           }
           break;
       default:
           if (Temperature <= -273.15)
           {
               printf("This is impossible");
           }
           else
           {
                F = Temperature * 9/5 + 32;
                K = Temperature + 273.15;
                printf ("%.2f C\n%.2f F\n%.2f K\n",Temperature , F, K);
           }
           break;
    }
    return 0;
}
