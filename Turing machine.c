#include <stdio.h>
#include <stdlib.h>
#define Max_Size 255
int main(int argc, char * argv[])
{
    int array[Max_Size];
    int i,d;
    for (d=0 ; d < Max_Size ; d++)
    {
        array[d]=0;
    }
    i=0;
    d=0;
    FILE *myfile;
    myfile = fopen("Sergey.txt", "r");
    char arr[Max_Size];
    while (fgets (arr, Max_Size, myfile) != NULL)
    {
       for (i = 0; arr[i]==' '; i++)
       {
       }
        switch (arr[i])
       {
        case 'i':
            if (array[d]==Max_Size)
            {
                printf ("\nYou can't do that. This cell will be nullified \n");
            }
            else
            {
            array[d]++;
            }
            break;
        case 'd':
            if (array[d]==0)
            {
                printf ("\nYou can't do that. This cell's value will stay at zero \n");
            }
            else
            {
                array[d]--;
            }
            break;
        case 'p':
            printf ("%d ", array[d]);
            break;
        case 'g':
            scanf ("%d", &array[d]);
            break;
        case 'm':
            if (arr[i+3] == 'r')
            {
               d++;
            }
            else
           {
               d--;
           }
           break;
        case '*':
            break;
        default:
            printf ("\nUnidentified command/string length exceeded. The process will be terminated.\n");
            return -1;
        }
   }
    return 0;
}
