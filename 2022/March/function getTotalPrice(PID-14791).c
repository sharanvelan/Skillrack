#include <stdio.h>
#include <stdlib.h>
#include<string.h>

double getTotalPrice(char *str)
{   
    double sum=0;
    char temp[1000];
    int t=0,c=0;
    for(int i=0;str[i];i++)
    {   
        temp[t++]=str[i];
        if(str[i]=='.'&&str[i+1]!='\0')
        c=1;
        if(str[i]==' '||str[i+1]=='\0')
        {   
            if(temp[t-1]=='.')
            {
                temp[t-1]='\0';
            }
            temp[t]='\0';
            
            if(temp[0]-'0'<10)
            {
                if(c)
                {
                    sum+=atof(temp);
                    c=0;
                }
            }
            temp[0]='\0';
            t=0;
        }
    }
    return sum;
}
int main()
{
    char str[101];
    scanf("%[^\n\r]", str);
    double totalPrice = getTotalPrice(str);
    printf("%.2lf", totalPrice);
    return 0;
}
