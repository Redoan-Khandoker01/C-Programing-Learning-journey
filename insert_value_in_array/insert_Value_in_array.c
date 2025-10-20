#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arry[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
        // printf("%d ",arry[i]);
    }
    int index, v;
    printf("\n");
    scanf("%d %d", &index, &v);
    // printf("%d %d",index,v);
    //  arry[index]=v;


    for (int i = n; i >= index + 1; i--)
    {
        arry[i] = arry[i - 1];
        
    }
    arry[index]=v;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arry[i]);
    }

    //// print the array

    return 0;
}