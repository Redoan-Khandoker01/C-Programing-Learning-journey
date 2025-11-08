#include<stdio.h>

void fun(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int main()
{
// int n;

// scanf("%d",&n);
// int a[n];
// for (int i = 0; i < n; i++)
// {
//     scanf("%d ",&a[i]);
// }
// fun(a,n);

///////////////////
int arr[4]={1,2,3,4};
int *p;
p=arr+3;
*p=100;
printf("%d\n",arr[3]);
////////////////

return 0;
}