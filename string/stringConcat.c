#include<stdio.h>
int main()
{
 char a[101],b[101];
 scanf("%s %s",&a,&b);



 int length_a = strlen(a);
  int length_b = strlen(b);

  for (int i = 0; i <= length_a; i++)
  {
     a[i+length_a]= b[i];



  }

  //  strcat(a,b); built in 
  
  printf("%s",a);



return 0;
}