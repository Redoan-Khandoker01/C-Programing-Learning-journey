#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arry[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arry[i]);
    }

    for (int i = n; i > 0; i--)
    {
        printf("%d ", arry[i]);
    }

    return 0;
}