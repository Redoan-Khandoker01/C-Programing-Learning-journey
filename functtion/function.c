#include<stdio.h>

int avarage(int a, int b ,int c)
{

    int additon = (a+b+c)/3;
    return additon;

}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int jogfol = avarage(a,b,c);
    printf("%d ",jogfol);



return 0;
}