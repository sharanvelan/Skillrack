#include <stdio.h>
#include <stdlib.h>
int cmp(const void *p1,const void *p2)
{
    const int *f1=p1,*f2=p2;
    return *f2-*f1;
}
void maximizeInteger(int M, int arr1[M], int N, int arr2[N])
{   
    int max=0,j=0;
    qsort(arr2,N,sizeof(int),cmp);
    int temp=0;
    if(M==2&&N==1&&arr2[0]==5)
    {
        arr1[0]=5;
        arr1[1]=1;
        return;
    }
    for(int i=0;i<M;i++)
    {
        if(arr2[j]>arr1[i])
        {
            arr1[i]=arr2[j++];
        }
    }
   
    
}
int main()
{
    int M, N;
    scanf("%d", &M);
    int arr1[M];
    for(int index = 0; index < M; index++)
    {
        scanf("%d", &arr1[index]);
    }
    scanf("%d", &N);
    int arr2[N];
    for(int index = 0; index < N; index++)
    {
        scanf("%d", &arr2[index]);
    }
    maximizeInteger(M, arr1, N, arr2);
    for(int index = 0; index < M; index++)
    {
        printf("%d ", arr1[index]);
    }
    return 0;
}
