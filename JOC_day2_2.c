#include<stdio.h>
#include<stdlib.h>
void *memory_alloc(int n)
{
    int *a;
    a=(int*)malloc(sizeof(int)*n);
    return a;
}
void accept(int *a,int n)
{
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
}
void rearrange(int *a,int n)
{
    int pbit,j;
    printf("Enter the position:\n");
    scanf("%d",&pbit);
    for(int i=pbit,j=1;j<=n;i=(i+1)%n,j++)
     printf("%d ",a[i]);
}
void main()
{
    int *a,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    a=memory_alloc(n);
    accept(a,n);
    rearrange(a,n);
}