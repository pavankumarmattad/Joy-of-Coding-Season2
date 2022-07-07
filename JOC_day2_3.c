#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*int main()
{
    int i;
    int *ptr=malloc(sizeof(int));
    *ptr=5;
    int *aptr=calloc(10,sizeof(int));
    for(i=0;i<10;i++)
     scanf("%d",aptr+i);
    for(i=0;i<10;i++)
     printf("%d",*(aptr+i));
    return 0;
}*/

typedef struct details
{
    int age;
    float sal;
    char name[10];
}details;
int main()
{
    details sd;
    sd.age=12;
    strcpy(sd.name,"Napeir");
    sd.sal=34.5;
}