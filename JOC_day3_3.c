#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*int main()
{
    int arr[5]={11,22,33,44,55};
    int *ptr=malloc(sizeof(int)*5);
    for(int i=0;i<5;i++)
     *(ptr+i)=*(arr+i);
    for(int i=0;i<5;i++)
     printf("%d ",ptr[i]);
    return 0;
}*/

int main()
{
    typedef struct details
    {
        int age;
        float sal;
        char name[20];
    }emp;

    emp e,*eptr=&e;
    eptr->age=21;
    eptr->sal=24.5;
    strcpy(eptr->name,"washington");
    return 0;
}