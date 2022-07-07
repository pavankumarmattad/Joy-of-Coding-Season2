#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    while(n)
    {
        rem=n%2;
        if(rem)
          sum++;
        n=n/2;
    }
    printf("The key is: %d",sum);
}