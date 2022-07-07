#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **a,n,m;
    printf("Enter the order of the matrix:\n");
    scanf("%d%d",&m,&n);
    a=(int**)malloc(sizeof(int*)*m);
    for(int i=0;i<m;i++)
     a[i]=(int*)malloc(sizeof(int)*n);
    printf("Enter the matrix elements:\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("The given matrix is:\n");
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }
    printf("The rotated matrix is:\n");
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<m;j++)
        printf("%d ",a[j][i]);
        printf("\n");
    }
}