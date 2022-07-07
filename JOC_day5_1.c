#include<stdio.h>
void main()
{
    int a[10],n,k;
    for(int i=0;i<10;i++)
     a[10]=-999;
    printf("Enter the total number of baloons:\n");
    scanf("%d",&n);
    printf("Enter the numbers on the baloons one after the other:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        a[k]=1;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]!=-999)
        printf("%d ",a[i]);
    }
}