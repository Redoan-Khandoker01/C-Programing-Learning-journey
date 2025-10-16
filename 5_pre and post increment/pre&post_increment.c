#include<stdio.h>
int main()
{

   int x =10;
   int y = x++;
   int z = ++y;

   printf("x = %d \ny = %d \n z++ = %d\n z= %d",x,y,z++,z);

    return 0;
}