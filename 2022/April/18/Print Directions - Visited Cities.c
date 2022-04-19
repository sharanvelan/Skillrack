#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    char mat[r][c][100];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%s ",mat[i][j]);
        }
    }
    
    int R=0,C=0,m=2;
    while(1)
    {   
        char tem[100];
        sprintf(tem,"%d",m);
        
        if(strcmp(mat[R+1][C],tem)==0)
        {
            R++;
            strcpy(mat[R][C],"*");
            printf("S ");
        }
        else if(strcmp(mat[R-1][C],tem)==0)
        {
            R--;
           
            strcpy(mat[R][C],"*");
            printf("N ");
        }
        else if(strcmp(mat[R][C+1],tem)==0)
        {
            C++;
            strcpy(mat[R][C],"*");
            printf("E ");
        }
        else if(strcmp(mat[R][C-1],tem)==0)
        {
            C--;
           
            strcpy(mat[R][C],"*");
            printf("W ");
        }
        else
        {
            break;
        }
        m++;
    }
   
    
}
