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
    scanf("%d",&commndline);
    
  
     for (int  i = 0; i < colum; i++)

     {
        printf("%d ",arry[commndline][i]);
     }
     
    
    return 0;
}