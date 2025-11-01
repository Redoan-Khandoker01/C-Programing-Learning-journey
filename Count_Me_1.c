#include<stdio.h>
int main()
{

int n;
scanf("%d",&n);
int array[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&array[i]);
}

int cout2 =0;
int cout3=0;

for(int i=0;i<n;i++)
{
    if(array[i]%2==0)
    {
        cout2++;
    }
    else if(array[i]%3==0)
    {
        cout3++;
    }

}
printf("%d %d", cout2, cout3);

return 0;
}