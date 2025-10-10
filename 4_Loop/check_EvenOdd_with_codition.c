#include<stdio.h>
int main()
{

   int n= 10;
   for(int i=1;i<+n;i++)
   {
        if(i%2 ==0)
        {
            printf("%d \n",i);
        }
   }
   printf("finish Even\n \n");

   for(int i=1;i<=n;i++)
   {
    if(i % 2 == 1)
    {
        printf("%d \n",i);
    }
   }
   printf("Finish Odd");


    return 0;
}