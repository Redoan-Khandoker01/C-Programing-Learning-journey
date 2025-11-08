#include<stdio.h>
void fun(int n)
{
    for (int i = 1; i <=n; i++)
    {
        printf("%d",i); // why don't take space in Codeforses
       
       
       // if (i<n) 
        // {
        //     printf(" ");
        // }
        
       
    }
    
}
int main()
{
int n;
scanf("%d",&n);
fun(n);


return 0;
}