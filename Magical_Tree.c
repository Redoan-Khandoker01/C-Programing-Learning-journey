#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int motLine = n+5+11/2;
    int star = 0;
    int spase = 0;
    for (int i = 0; i <= motLine; i++)
    {
        for (int i = motLine; i > spase; i--)
        {
            printf(" ");
        }
        for (int i = n; i < star; i++)
        {
            printf("*");
        }
        printf("\n");
        spase++;
        star += 2;
    }
    ///////////////// lowar site

    int spasss = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 1; i <= spasss; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}