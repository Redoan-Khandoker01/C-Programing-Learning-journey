#include<stdio.h>

void hello(int a[], int n,int i)
{
    if (i ==n)
    {
        return;
    }
    printf("%d\n",a[i]);
    hello(a,n,i+1);
    


}

int main()
{
int n;
scanf("%d",&n);
int arry[n];
for (int  i = 0; i < n; i++)
{
   scanf("%d",&arry[i]);
}

hello(arry,n,0);


return 0;
}