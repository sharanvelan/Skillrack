#include<stdio.h>
#include<stdlib.h>

int main()
{
  int t,n;
  scanf("%d %d",&t,&n);
  
  int mat[t][n];
  for(int i=0;i<t;i++)
  {
      for(int j=0;j<n;j++)
      {
          scanf("%d",&mat[i][j]);
      }
  }
  int k,count=0;
  scanf("%d",&k);
  
  int bucket[n];
  for(int i=0;i<n;i++)
  {
      bucket[i]=0;
  }
  
  for(int i=t-1;i>=0;i--)
  {
      for(int j=0;j<n;j++)
      {
          bucket[j]+=mat[i][j];
      }
      
      for(int j=0;j<n;j++)
      {
          if(bucket[j]>=k)
          {  
              count++;
              bucket[j]=0;
          }
      }
  }
  printf("%d",count*k);
}
