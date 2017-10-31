#include <stdio.h>

int main(int argc, char *argv[])
{
    int stack[100];
    int n = 0;
    int counter_numbers, counter_signs;
    counter_numbers = 0;
    counter_signs = 0;
    printf("Instructions:\n\nEnter numbers then mathematical signs and the equation sign to show the result;\n\nExample: 15 5 + =\n\nEnter the letter 'e' when finished\n\n");
    while (!feof(stdin))
    {
        int symbol = getchar();
        int Thingy;

        switch (symbol)
        {
        case ' ':
        case '\n':
            break;


        case '+':
            stack[n-2]=stack[n-2]+stack[n-1];
            n--;
            counter_signs++;
            break;


        case '-':
            stack[n-2] = stack[n-2]-stack[n-1];
            n--;
            counter_signs++;
            break;

        case '*':
            stack[n-2]=stack[n-2]*stack[n-1];
            n--;
            counter_signs++;
            break;

        case '/':
            stack[n-2]=stack[n-2]/stack[n-1];
            n--;
            counter_signs++;
            break;


        case '=':
            if (counter_numbers +1 == counter_signs)
            {
            printf ("Result = %d\n", stack[n-1]);
            n--;
            break;
            }
            else
            {
                printf("\nERROR");
                return -2;
            }

        case 'e':
            printf ("\nDone\n");
            return 0;

        default:
            ungetc (symbol, stdin);
            if (scanf("%d",&Thingy)!=1)
            {
                printf ("Can't understand what you typed in\n");
                return -1;
            }
            else
            {
                stack[n] = Thingy;
                n++;
            }
        }
    }
    return 0;
}
