#include <stdio.h>
void odd_even()
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 1; i <= N; i++)
    {
        scanf("%d ", &A[i]);
    }

    int even = 0;
    int odd = 0;

    for (int i = 1; i <= N; i++)
    {
        if (A[i] % 2 == 0)
        {
            even++;
        }
        else if (A[i]%2==1)
        {
            odd++;
        }
    }

    printf("%d %d", even,odd);
}

int main()
{

    odd_even();

    return 0;
}