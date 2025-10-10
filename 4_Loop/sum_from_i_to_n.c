#include<stdio.h>
int main()
{

   int n =11;
   int sum = 0;
   int multy=2;
   for(int i=1;i<=n;i++)
   {
        sum=sum+i;
      
   }
   for (int j = 1; j <=n; j++)
   {
    multy=multy*j;
   }
   printf("gun = %d\nsum = %d",multy,sum);

    return 0;
}