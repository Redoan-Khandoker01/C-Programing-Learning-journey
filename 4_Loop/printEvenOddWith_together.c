#include<stdio.h>
int main()
{

   int n= 10;
   for(int i=1;i<=n;i++)
   {
    if(i%2==1)
    {
        printf("%d Odd \n",i);
        
    }
    else{
        printf("%d Even \n",i);
    }
  
   }

    return 0;
}