#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    char **words;
} boundedArray;
#include<string.h>

int cmp(const void **p1,const void **p2)
{
    return strcmp(*p1,*p2);
}
boundedArray* sortSubstrings(char *str, int K)
{
    char **word=malloc(sizeof(char)*1000);
    int w=0,c=0,s=0;
    char split[100];
    for(int i=0;str[i];i++)
    {
        split[s++]=str[i];
        
        c++;
        if(c==K)
        {
            split[s]='\0';
           
            char *add=malloc(sizeof(char)*100);
            strcpy(add,split);
            word[w++]=add;
            strcpy(split," ");
            s=0;
            c=0;
        }
        
    }
    
    qsort(word,w,sizeof(char **),cmp);
    struct BoundedArray *arr=malloc(sizeof(struct BoundedArray));
    arr->SIZE=w;
    arr->words=word;
    return arr;

}
int main()
{
    char str[101];
    int K;
    scanf("%s\n%d", str, &K);
    boundedArray *bArr = sortSubstrings(str, K);
    if(bArr == NULL || bArr->SIZE == 0 || bArr->words == NULL
            || bArr->words[0][0] == '\0' || bArr->words[0][0] == ' ')
    {
        printf("String values are not formed\n");
    }
    for(int index = 0; index < bArr->SIZE; index++)
    {
        printf("%s ", bArr->words[index]);
    }
    return 0;
}
