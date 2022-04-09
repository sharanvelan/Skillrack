#include<stdio.h>
#include<stdlib.h>

int main()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    m+=h*60;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   
        char name[100];
        int h1,m1;
        scanf("%s %d:%d",name,&h1,&m1);
        m1+=h1*60;
        printf("%s ",name);
        if((m-m1)>0)
        printf("%d\n",m-m1);
        else
        printf("-1\n");
        
    }
}
