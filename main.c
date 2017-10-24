#include <stdio.h>

int main()
{
    int stack[1000];
    int n = 0;
    printf("Instructions:\n\nEnter numbers then mathematical signs and the equation sign to show the result;\n\nExample: 15 5 * =\n\nEnter the letter 'e' when finished\n\n");
    while (!feof(stdin))
    {
        int symbol = getchar();
        int thingy;
        switch (symbol)
        {
        case ' ':
        case '\n':
            break;


        case '+':
            stack[n-2]=stack[n-2]+stack[n-1];
            n--;
            break;


        case '-':
            stack[n-2] = stack[n-2]-stack[n-1];
            n--;
            break;

        case '*':
            stack[n-2]=stack[n-2]*stack[n-1];
            n--;
            break;

        case '/':
            stack[n-2]=stack[n-2]/stack[n-1];
            n--;
            break;


        case '=':
            printf ("Result = %d\n", stack[n-1]);
            n--;
            break;
        case 'e':
            printf ("\nDone\n");
            return 0;
        default:
            ungetc (symbol, stdin);
            if (scanf("%d",&x)!=1)
            {
                fprintf (stderr, "Can't understand what you typed in\n");
                return -1;
            }
            else
            {
                stack[n] = thingy;
                n++;
            }
        }
    }
    printf("Result = %d\n", stack[n]);
    return 0;
}
