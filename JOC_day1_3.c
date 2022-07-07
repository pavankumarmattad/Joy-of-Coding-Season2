#include<stdio.h>
/*int main()
{
    int b;
    int *prt=&b;
    int **ptr=&prt;
    printf("the value of b is %d",b);
    printf("the value of b is %d",*prt);
    printf("the value of b is %d",**ptr);
    return 0;
}*/

int main()
{
    int a=20;
    float b=20.2;
    void *ptr=&a;
    printf("the value of a is %d",*(int*)ptr);
    ptr=&b;
    printf("the value of b is %f",*(float*)ptr);
}

