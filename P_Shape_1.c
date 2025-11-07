#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int star=n;
for (int i = 0; i < n; i++) // for printing line from 1 to  n;
{   
for (int i =star;i>0;i--) // for printing stars ;
{
    printf("*");
}
    star--; // for decrise -1 
    printf("\n");
   
}



return 0;
}