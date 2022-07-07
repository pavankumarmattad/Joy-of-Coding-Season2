#include<stdio.h>
void main()
{
    int n,a[100],l,sl;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter the array values:\n");
    for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
    l=sl=a[0];
    for(int i=1;i<n;i++)
        if(a[i]>l)
         l=a[i];
    for(int i=1;i<n;i++)
        if(a[i]<l && a[i]>=sl)
         sl=a[i];
    printf("The two baloons are: %d %d\n",l,sl);
}