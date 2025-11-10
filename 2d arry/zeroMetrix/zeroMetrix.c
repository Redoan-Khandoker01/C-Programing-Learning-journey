#include<stdio.h>
int main()
{
int row,col;
scanf("%d %d",&row,&col);
int arry[row][col];
for (int  i = 0; i < row; i++)
{
    for (int  j= 0; j < col; j++)
    {
        scanf("%d",&arry[i][j]);
    }
    
}

int totalvalue = row*col;
int zero =0;

for (int  i = 0; i < row; i++)
{
    for (int  j= 0; j < col; j++)
    {
       if(arry[i][j]==0)
       {
        zero++;
       }
    }
    
}
if (totalvalue ==zero)

{
    printf("it is a zero matrix");
}
else{
    printf("it is not a zero matrix");
}



return 0;
}