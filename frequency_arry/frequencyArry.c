#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    // 0 1 3
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arry[i] == 0)
        {
            count0++;
        }
        else if (arry[i] == 1)
        {
            count1++;
        }
        else if (arry[i] == 2)
        {
            count2++;
        }

        else if (arry[i] == 3)
        {
            count3++;
        }
    }

    printf("0 =%d\n", count0);
    printf("1 =%d\n", count1);
    printf("2 =%d\n", count2);
    printf("3 =%d\n", count3);

    return 0;
}