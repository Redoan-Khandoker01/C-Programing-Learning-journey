#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int star = 1;
    int spece= n-1;
    for (int i = 0; i < n; i++)
    {

        for (int i = 0; i <=spece; i++)
        {
            printf(" ");
        }
        
        

        for (int i = 0; i < star; i++)
        {
            printf("*");
        }

        printf("\n");
        spece--;
        star+=2;
        
    }

    return 0;
}