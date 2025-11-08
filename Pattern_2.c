#include<stdio.h>
int main()
{
int n; 
scanf("%d",&n);
int spease =n-1;
int digit =1;

for (int i = 1; i <= n; i++)
{
    ///for printing spece;
   for (int i = spease; i >=1; i--)
   {
    printf(" ");
   }
   
    
//////////// for pringting digit 
for (int i = digit; i>=1; i--)
{
    printf("%d",i);
}




    spease--;
    digit++;
    printf("\n");
}



return 0;
}