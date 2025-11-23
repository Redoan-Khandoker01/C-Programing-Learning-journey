#include<stdio.h>
int main()
{
long long int x;
long long int y;
scanf("%lld",&x);
scanf("%lld",&y);

printf("%lld + %lld = %lld\n",x,y,x+y);
printf("%lld * %lld = %lld\n",x,y,x*y);
printf("%lld - %lld = %lld\n",x,y,x-y);


return 0;
}