#include<stdio.h>
#include<stdlib.h>
int isvowel(char s)
{
    char t=tolower(s);
    if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
   char s[1000],cons[1000];
   scanf("%s",s);
   int t=0;
   for(int i=0;s[i];i++)
   {
       if(!isvowel(s[i]))
       {
           cons[t++]=s[i];
       }
   }
   cons[t]='\0';
   int j=0,l=t;
   while(isvowel(s[j]))
   {
       j++;
   }
   t=1;
   for(int i=j;s[i];i++)
   {
       if(!isvowel(s[i]))
       {   
           if(t==l)
           {
               s[i]=cons[0];
           }
           else
           s[i]=cons[t++];
       }
   }
   
   printf("%s",s);
}
