#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char s[1000];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    FILE *ftr=fopen(s,"r");
    int i=0;
    char word[100][100];
    while(fscanf(ftr,"%s",word[i])==1)
    {
        i++;
    }
    
    for(int j=n-1;j>=0;j--)
    {
        printf("%s\n",word[j]);
    }
    fclose(ftr);
}
