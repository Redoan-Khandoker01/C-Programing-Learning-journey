#include<stdio.h>
int main()
{

int n= 100;
printf("n= %p\n",&n);

int *p;
p=&n;

printf("%d\n",*p);
*p=200;
printf("%d",*p);



return 0;
}