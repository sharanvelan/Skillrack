#include<stdio.h>
#include<stdlib.h>

int main()
{
   int r,c,k;
   scanf("%d %d",&r,&c);
   char mat[r][c];
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           scanf(" %c",&mat[i][j]);
       }
       
   }
   int index=0;
   scanf("%d",&k);
   char sub[(r*c)/(k*k)][k*k + 1];
   for(int i=0;i<r;i+=k)
   {  
       for(int j=0;j<c;j+=k)
       {    
            int in=0;
            for(int h=i;h<i+k;h++)
            {
                for(int l=j;l<j+k;l++)
                {
                    sub[index][in++]=mat[h][l];
                    //printf("%c",mat[h][l]);
                }
               // printf("\n");
            }
           sub[index][k*k]='\0';
           index++;
       }
   }
   
  for(int i=0;i<index;i++)
  {
      int c=1;
      for(int j=0;j<index;j++)
      {
          if(i!=j)
          {
              if(strcmp(sub[i],sub[j])==0)
              {   
                  c=0;
                  break;
              }
          }
      }
      if(c)
      {   
          int t=0;
          for(int l=0;l<k;l++)
          {
              for(int j=0;j<k;j++)
              {
                  printf("%c ",sub[i][t++]);
              }
              printf("\n");
          }
          return;
      }
  }
  printf("-1");
   
}
