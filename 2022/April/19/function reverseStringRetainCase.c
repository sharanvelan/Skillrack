#include <stdio.h>
#include <stdlib.h>
void reverseStringRetainCase(char *str)
{   
    int f=0,l=0;
    for(int i=0;str[i];i++)
    {   
        l++;
        if(str[i]==' '||str[i+1]=='\0')
        {
            int t=l-2;
            if(str[i+1]=='\0')
            {
                t++;
            }
            while(f<t)
            {
                char te=str[f];
                if(isupper(str[f]))
                {
                    str[f]=toupper(str[t]);
                    if(isupper(str[t]))
                    {
                    str[t]=toupper(te);
                    }
                    else
                    str[t]=tolower(te);
                    
                }
                else
                {
                    str[f]=tolower(str[t]);
                    if(isupper(str[t]))
                    {
                    str[t]=toupper(te);
                    }
                    else
                    str[t]=tolower(te);
                }
                
                f++;
                t--;
            }
            f=l;
        }
    }
 
}
int main()
{
    char str[1001];
    scanf("%[^\n]", str);
    reverseStringRetainCase(str);
    if(str[0] == '\0' || str[0] == ' ')
    {
        printf("String is empty\n");
    }
    printf("%s", str);
    return 0;
}
