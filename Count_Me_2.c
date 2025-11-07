#include<stdio.h>
int main()
{

char s[100001];
scanf("%s",&s);
int lentgh =strlen(s);
int count=0;
for (int i = 0; i < lentgh; i++)
{
    int c=s[i];
    if(c != 'a' && c!='e' && c!='i' && c!='o'&& c!='u')
    {
        count++;
    }
}
printf("%d",count);


return 0;
}