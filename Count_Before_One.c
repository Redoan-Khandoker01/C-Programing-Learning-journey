#include <stdio.h>

int count_before_one(int A[], int N, int count)
{

    for (int i = 1; i <= N; i++)
    {
        if (A[i] == 1)
        {
           break;
        }
        count++;
    }

    return count;
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 1; i <=N; i++)
    {
        scanf("%d", &A[i]);
    }
    int count =0;
    int output = count_before_one(A, N,count);

    printf("%d",output);

    return 0;
}