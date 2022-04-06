#include <stdio.h>
#include <stdlib.h>
int cmp(const void *p1,const void *p2)
{
    const int *f1=p1,*f2=p2;
    return strcmp(f1,f2);
}
void sortBasedOnDigits(int SIZE, int *arr)
{
     char array[SIZE][100];
    for(int i=0;i<SIZE;i++)
    {
        sprintf(array[i],"%d",arr[i]);
    }
    
    qsort(array,SIZE,sizeof(char)*100,cmp);
    
    for(int i=0;i<SIZE;i++)
    {
        arr[i]=atoi(array[i]);
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int index = 0; index < N; index++)
    {
        scanf("%d", &arr[index]);
    }
    sortBasedOnDigits(N, arr);
    for(int index = 0; index < N; index++)
    {
        printf("%d ", arr[index]);
    }
    return 0;
}
