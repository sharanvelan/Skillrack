#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int R, C;
    int **matrix;
} boundedArray;

boundedArray* removeRowsWithSameValue(int R, int C, int *matrix)
{
  
  int **ans=(int**)malloc(sizeof(int*)*R);
  int an=0;
  for(int i=0;i<R;i++)
  {
      int *arr=(int *)malloc(sizeof(int)*C),check=1;
      int comp=matrix[(i*C)+0];
      for(int j=0;j<C;j++)
      {   
          if(comp!=matrix[(i*C)+j])
          {
            check=0;
          }
          arr[j]=matrix[(i*C)+j];
      }
      if(!check)
      {
          ans[an++]=arr;
      }
  }
  
  struct BoundedArray *bou=malloc(sizeof(struct BoundedArray));
  if(an==0)
  {   
      ans[0]=(int*)malloc(sizeof(int)*1);
      ans[0][0] = -1;
      an=1;
      C=1;
  }
  bou->R=an;
  bou->C=C;
  bou->matrix=ans;
  return bou;
} // End of removeRowsWithSameValue function

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf(" %d", &matrix[row][col]);
        }
    }
    boundedArray *bArr = removeRowsWithSameValue(R, C, matrix);
    if(bArr == NULL)
    {
        printf("Matrix is not formed\n");
    }
    if(bArr->R <= 0 || bArr->C <= 0)
    {
        printf("Invalid size for the revised matrix\n");
    }
    for(int row = 0; row < bArr->R; row++)
    {
        for(int col = 0; col < bArr->C; col++)
        {
            printf("%d ", bArr->matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
} // End of main() function
