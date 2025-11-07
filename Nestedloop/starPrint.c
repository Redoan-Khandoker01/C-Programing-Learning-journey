#include<stdio.h>
int main()
{

int n;
scanf("%d",&n);
int star =1;


for (int i = 0; i < n; i++) // for printing line from n ;
{
    for (int i = 0; i <star; i++) // for printing star from 1 to n line 
    {
        printf("*");
    }
    


    printf("\n");
    star++;
}


return 0;
}