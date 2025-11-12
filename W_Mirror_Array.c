#include<stdio.h>
int main()
{
int N;
int M;
scanf("%d %d",&N,&M);

int arry[N][M];
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < M; j++)
    {
        scanf("%d",&arry[i][j]);
    }
    
}

///////print    

for (int i = 0; i < N; i++)
{
    for (int j = M-1; j >= 0; j--)
    {
        printf("%d ",arry[i][j]);
    }
    printf("\n");
}

return 0;
}