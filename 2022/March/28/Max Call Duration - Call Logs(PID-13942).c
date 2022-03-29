#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);
   long long int number[n],tem[n];
   int sec[n];
   for(int i=0;i<n;i++)
   {
       int h1,s1,m1,h2,m2,s2,se;
       long long int num;
       scanf("%lld %d:%d:%d %d:%d:%d",&num,&h1,&m1,&s1,&h2,&m2,&s2);
       se=((h2*3600)+(m2*60)+s2)-((h1*3600)+(m1*60)+s1);
       number[i]=num;
       tem[i]=num;
       sec[i]=se;
   }
   
   for(int i=0;i<n-1;i++)
   {   
       if(number[i]!=0)
       for(int j=i+1;j<n;j++)
       {
           if(number[i]==number[j])
           {
               sec[i]+=sec[j];
              
               number[j]=0;
           }
       }
   }
   int maxi=0,max=sec[0];
   for(int i=1;i<n;i++)
   {
       if(max<sec[i])
       {
           max=sec[i];
           maxi=i;
       }
   }
   
   for(int i=0;i<n;i++)
   {   
       if(max==sec[i])
       printf("%lld\n",tem[i]);
   }
}
