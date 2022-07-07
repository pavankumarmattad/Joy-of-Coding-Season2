#include<stdio.h>
void main()
{
    int n,*a;
    printf("Enter the total number of entries:\n");
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    printf("Enter the elements of the list:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The reverse of the given list is:\n");
    for(int i=n-1;i>=0;i--)
       printf("%d",a[i]);
}