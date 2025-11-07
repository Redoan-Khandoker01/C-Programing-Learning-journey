#include<stdio.h>
int main()
{
int n; 
scanf("%d",&n);
int star=1;
int spase = n-1;
for (int i =0;i<n;i++)
{

    for (int i = 0; i <=spase; i++)
    {
       printf(" ");
    }
    for (int i = 1; i <=star; i++)
    {
        printf("*");
    }
    
    
    printf("\n");
    spase--;
    star+=2;
}  


return 0;
}