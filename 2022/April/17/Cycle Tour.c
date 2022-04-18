#include<stdio.h>

int main()
{
  int t;
  scanf("%d",&t);
  while(t>0)
  {
   int n;
   scanf("%d",&n);
   int arr[n],sum=0;
   for(int i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   for(int j=1;j<n-1;j++)
   {
    if(arr[j]>arr[j-1]&&arr[j]>arr[j+1])
    {
    sum++;
    }
   }
   printf("%d\n",sum);
   t--;
  }
}
