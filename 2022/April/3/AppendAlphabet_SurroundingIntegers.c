#include<stdio.h>
#include<stdlib.h>
int check(char *s)
{
    if(s[0]-'0'>9)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    char mat[r][c][1000];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%s",mat[i][j]);
        }
    }
   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(check(mat[i][j]))
            {   
                for(int k=j-1;k<=j+1;k++)
                {
                    if(i>=0&&i<r&&k>=0&&k<c)
                    {
                        char temp[100000];
                        strcpy(temp,mat[i-1][k]);
                        int l=strlen(temp);
                        temp[l]=mat[i][j][0];
                        temp[l+1]='\0';
                        strcpy(mat[i-1][k],temp);
                        
                        
                    }
                    
                }
                for(int k=j-1;k<=j+1;k++)
                {   
                    if(k!=j)
                    if(i>=0&&i<r&&k>=0&&k<c)
                    {   
                        char temp[100000];
                        strcpy(temp,mat[i][k]);
                        int l=strlen(temp);
                        temp[l]=mat[i][j][0];
                        temp[l+1]='\0';
                        strcpy(mat[i][k],temp);
                    }
                    
                }
                for(int k=j-1;k<=j+1;k++)
                {
                    if(i>=0&&i<r&&k>=0&&k<c)
                    {
                        char temp[100000];
                        strcpy(temp,mat[i+1][k]);
                        int l=strlen(temp);
                        temp[l]=mat[i][j][0];
                        temp[l+1]='\0';
                        strcpy(mat[i+1][k],temp);
                        
                    }
                    
                }
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%s ",mat[i][j]);
        }
        printf("\n");
    }
}
