#include<stdio.h>
#include<stdlib.h>

int main()
{
     char str[1000];
     scanf("%s",str);
     int t=0,l=strlen(str),rem=0,i=0;
     while(i<l)
     {
         if(str[i]==str[i+1])
         {
            rem++;
            i++;
         }
         else 
         {
             i+=2;
         }
         
     }
     printf("%d",(l-rem)%2==0?rem:rem+1);
}
