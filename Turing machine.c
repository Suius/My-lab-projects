#include <stdio.h>
#include <stdlib.h>
#define Max_Size 255
int main(int argc, char * argv[])
{
    int array[Max_Size];
    int i,d, cond;
    long int pos_begin, pos;
    for (d=0 ; d < Max_Size ; d++)
    {
        array[d]=0;
    }
    cond=0;
    i=0;
    d=125;
    FILE *myfile;
    myfile = fopen("Sergey.txt", "r");
    char arr[Max_Size];
    while (fgets (arr, Max_Size, myfile) != NULL)
    {
        pos=ftell(myfile);
       for (i = 0; arr[i]==' '; i++)
       {
           if (i==Max_Size)
           {
               printf("\nString length exceeded. The process will be terminated.\n");
               return -2;
           }
       }
        switch (arr[i])
       {
        case 'i':
            if (cond!=1)
            {
            if (array[d]==Max_Size)
            {
                printf ("\nUnable to increase by 1. This cell will be nullified \n");
            }
            else
            {
            array[d]++;
            }
            }
            break;
        case 'd':
            if (cond!=1)
            {
            if (array[d]==0)
            {
                printf ("\nUnable to decrease by 1. This cell's value will be nullified \n");
            }
            else
            {
                array[d]--;
            }
            }
            break;
        case 'p':
            if (cond!=1)
            {
            printf ("%d ", array[d]);
            }
            break;
        case 'g':
            if (cond!=1)
            {
            scanf ("%d", &array[d]);
            }
            break;
        case 'b':
            if (array[d]!=0)
            {
            pos_begin=ftell(myfile);
            }
            else
            {
                cond=1;
            }
            break;
        case 'e':
           if (array[d]!=0 && cond!=1)
           {
           pos=pos_begin;
           fseek(myfile, pos, SEEK_SET);
           cond=0;
           }
            break;
        case 'r':
            if (cond!=1)
            {
            if (array[d]==Max_Size)
            {
                d=0;
            }
            else
            {
                d++;
            }
            }
           break;
        case 'l':
            if (cond!=1)
            {
            if (d==0)
            {
                d=Max_Size;
            }
            else
            {
                d--;
            }
            }
            break;
        case 'a':
            if (cond!=1)
            {
            printf ("%c ",array[d]);
            }
            break;
        case '*':
            break;
        default:
            printf ("\nUnidentified command. The process will be terminated.\n");
            return -1;
        }
   }
    return 0;
}
