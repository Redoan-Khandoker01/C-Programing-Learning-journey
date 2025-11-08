#include<stdio.h>

int is_palindrome(char s [1001])
{
        int len=strlen(s)-1;
        
        int i=0;
        int j = strlen(s);
        for(int i=0;i<len;i++)
        {
            for(int j=1;j<=s;j++)
            {
                if(s[i]==s[j])
                {
                
                }
                
                  i++;
                  j--
                
            }
 

        }


    return 1;
}

int main()
{
char s[1001];
scanf("%s",&s);

int take =is_palindrome(s);


if (take ==1)
        {
            printf("Palindrome\n");
        }
    else
        {
            printf("Not Palindrome\n");
        }



return 0;
}