#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a,n,sum,count,flag=1,i;
    printf("Enter the total number of elements:\n");
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the sum:\n");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        count=0;
        if(sum==a[i])
        {
            printf("the sub array is[%d]\n",a[i]);
            printf("indices range from %d to %d\n",i,i);
            break;
        }
        else
        {
            for(int j=i;j<n;j++)
            {
                count=count+a[j];
                if(count==sum)
                {
                    printf("the sub array is [");
                    for(int k=i;k<=j;k++)
                    {
                        if(k!=j)
                        printf("%d,",a[k]);
                        else
                        printf("%d",a[k]);
                    }
                    printf("]\n");
                    printf("Indices range from %d to %d",i,j);
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0)
         break;
    }
    if(i==n)
     printf("Not possible to obtain sum\n");
}