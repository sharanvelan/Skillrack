#include <stdio.h>
#include <stdlib.h>
int areConsecutive(char *str)
{
    int f=0,l=0;
    char fi[100],la[100];
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        fi[i]=str[i];
    }
    fi[len/2]='\0';
    if(str[len/2]=='0')
    {
        fi[len/2]='0';
        fi[(len/2)+1]='\0';
    }
    for(int i=len/2;i<len;i++)
    {   
        la[l++]=str[i];
    }
    la[l]='\0';
    
    f=atoi(fi);
    l=atoi(la);
    if((f+1)==l||(l+1)==f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char str[101];
    scanf("%s", str);
    printf("%d", areConsecutive(str));
    return 0;
}
