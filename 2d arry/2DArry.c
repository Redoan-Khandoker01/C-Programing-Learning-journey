#include <stdio.h>
int main()
{

    int row, colum;
    scanf("%d %d", &row, &colum);
    int arry[row][colum];
    for (int i = 0; i < row; i++) // for taking input .
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d \n", &arry[i][j]);
        }
    }
    int commndline;
    
    printf("%d %d\n", row,colum);
     for (int i = 0; i < row; i++) //for printing 2D arry 
    {
        for (int j = 0; j < colum; j++)
        {
            printf("%d ", arry[i][j]);
            

        }
        printf("\n");
    }
    
    return 0;
}