#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    char string[100];
    scanf("%s",string);
    int arr[26]={0};
    for(int i=0;string[i];i++)
    {
        arr[string[i]-'a']++;
    }
    int flag=0,j;
    for(int i=0;i<=27;i++)
    {   
        if(arr[i]>=1){
        printf("%c:",i+'a');
        
        while(arr[i]>=1)
        {
            i++;
        }
        
        i--;
        printf("%c\n",i+'a');
        }
    }
}
