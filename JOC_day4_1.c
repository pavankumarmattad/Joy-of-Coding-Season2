#include<stdio.h>
typedef struct book
{
    int book_id;
    char book_name[20];
    char book_author[10];
    float book_price;
}b;
void main()
{
    b box[5];
    int top=-1;
    while(1)
    {
        int ch,key;
        printf("Enter choice:\n1.Insert book\n2.Delete book\n3.Display book details\n4.Exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert(box,&top); break;
            case 2: delete(box,&top); break;
            case 3: display(box,top); break;
            case 4: exit(0);
            default: printf("Invalid Input choice\n");
        }
    }
}
void insert(b box[],int* top)
{
    if(*top==5)
    {
        printf("Box is full!\n");
        return;
    }
    *top++;
    printf("Enter the details of the book:\n");
    scanf("%d%s%s%f",&box[*top].book_id,&box[*top].book_name,&box[*top].book_author,&box[*top].book_price);
}
void delete(b box[],int *top)
{
    if(*top==-1)
    {
        printf("Box is empty!\n");
        return;
    }
    printf("The deleted book details are:\n");
    printf("%d%s%s%f",box[*top].book_id,box[*top].book_name,box[*top].book_author,box[*top].book_price);
    *top--;
}
void display(b box[],int top)
{
     if(top==-1)
    {
        printf("Box is empty!\n");
        return;
    }
    printf("The book details are:\n");
    printf("%d%s%s%f",box[top].book_id,box[top].book_name,box[top].book_author,box[top].book_price);
}