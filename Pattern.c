#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    // Up SITE
    for (int i = 1; i <= N; i++)
    {
        //  spaces
        for (int s = 1; s <= N - i; s++)
        {
            printf(" ");
        }
        //  characters
        char ch;
        if (i % 2 != 0)
        {
            ch = '#';
        }
        else
        {
            ch = '-';
        }

   
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    ///////////////////////////////////////////////////

                  // Lower 
    for (int i = N - 1; i >= 1; i--)
    {
                   // spaces
        for (int s = 1; s <= N - i; s++)
        {
            printf(" ");
        }
                    // characters
        char ch;
        if (i % 2 != 0)
        {
            ch = '#';
        }
        else
        {
            ch = '-';
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}