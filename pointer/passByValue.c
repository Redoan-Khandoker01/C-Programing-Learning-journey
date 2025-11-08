#include<stdio.h>

void fun(int *p)
{
    *p=*p/4;
}

int main()
{
    int x= 20;
    fun(&x);
    printf("%d",x);





return 0;
}