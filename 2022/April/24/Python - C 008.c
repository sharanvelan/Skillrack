#include<stdio.h>
#include<stdlib.h>
int dec(char *s)
{
    int val=0,l=strlen(s)-1,bi=0;
    for(int i=l;i>=0;i--)
    {
        if(s[i]=='1')
        {
            val+=(int)pow(2,bi);
        }
    
        bi++;
    }
    return val;
}
void rev(char *r)
{
    int l=strlen(r)-1,f=0;
    while(f<l)
    {
        char t=r[f];
        r[f]=r[l];
        r[l]=t;
        f++;
        l--;
    }
}
char* bin(int n)
{
    char *r=malloc(sizeof(char)*1000);
    int i=0;
    while(n>0)
    {
        r[i++]=(n%2)+'0';
        n/=2;
    }
    r[i]='\0';
    rev(r);
    return r;
    
}
int main()
{
int n1,n2,k,j=0;
char str[1000];
scanf("%d %d",&n1,&n2);
scanf("%d",&k);
char *b1=bin(n1),*b2=bin(n2);
for(int i=0;i<k;i++)
str[j++]=b1[i];
int l2=strlen(b2)-k;
for(int i=l2;b2[i];i++)
str[j++]=b2[i];

str[j]='\0';
printf("%d",dec(str));

}
