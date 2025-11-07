#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int jogfol;
    scanf("%d", &jogfol);

    int flag = 100;  

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == jogfol)
            {
                flag = 202;
                printf("YES\n");
                // printf("%d+%d =%d\n", array[i],array[j], jogfol);
            }
        }
    }

    if (flag ==100)
    {
        printf("NO\n");
    }
    
    printf("flag == %d", flag);
    //  for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",array[i]);
    // }
    // printf("%d",jogfol);

    return 0;
}