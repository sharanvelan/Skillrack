#include<stdio.h>
#include<stdlib.h>

int main()
{
      int n;
      scanf("%d",&n);
      int arr[n],sum=0;
      
      for(int i=0;i<n;i++)
      {
      scanf("%d",&arr[i]);
      sum+=arr[i];
      }
      
      int ch=arr[0],asum=arr[0];
      while(asum<=sum)
      {
          printf("%d ",ch++);
          asum+=ch;
      }
}
