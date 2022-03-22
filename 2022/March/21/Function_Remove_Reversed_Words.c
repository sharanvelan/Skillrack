#include <stdio.h>
#include <stdlib.h>
char* removeReversedWords(char *str1, char *str2)
{
      
      char rev[1000],*ans=malloc(sizeof(char)*1000);
      int rl=strlen(str2),j,a=0;
      j=rl-1;
      for(int i=0;i<rl;i++)
      {
          rev[i]=str2[j--];
      }
      rev[rl]='\0';
      
      char tem[100];
      int t=0,w=0;
      for(int i=0;str1[i];i++)
      {
          tem[t++]=str1[i];
          if(str1[i]==' ')
          {
              tem[t-1]='\0';
              
              if(strcmp(tem,rev)!=0&&strcmp(tem,str2)!=0)
              {
                  for(int k=0;tem[k];k++)
                  {
                      ans[a++]=tem[k];
                  }
                  ans[a++]=' ';
              }
              tem[0]='\0';
              t=0;
          }
      }
      tem[t]='\0';
      if(strcmp(tem,rev)!=0&&strcmp(tem,str2)!=0)
      {
          for(int k=0;tem[k];k++)
          {
              ans[a++]=tem[k];
          }
      }
      if(a==0)
      {
          ans[a++]='-';
          ans[a++]='1';
      }
      ans[a]='\0';
      return ans;
}
int main()
{
    char str1[1001], str2[1001];
    scanf("%[^\n\r]\n\r%s", str1, str2);
    char *result = removeReversedWords(str1, str2);
    if(result == NULL || result == str1 || result == str2)
    {
        printf("String is not formed\n");
    }
    if(result[0] == ' ' || result[0] == '\0')
    {
        printf("String is empty\n");
    }
    printf("%s", result);
    return 0;
}
