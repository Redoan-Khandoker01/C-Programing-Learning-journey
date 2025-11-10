#include<stdio.h>
int main()
{

int row,colum;
scanf("%d %d",&row,&colum);
int a[row][colum];

for (int  i = 0; i < row; i++)
{
    for (int i = 0; i < colum; i++)
    {
        scanf("%d",&a[i][i]);
    }
    
}
if(row ==1)
{
    printf("row metrix");
}
else if (colum==1)
{
    printf("colum metrix");
}
return 0;

}