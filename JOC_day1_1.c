#include<stdio.h>
void main()
{
    char sen[100],vo[100],con[100];
    int j=0,k=0;
    printf("Enter the sentence:\n");
    scanf("%[^\n]%*c",sen);
    for(int i=0;sen[i]!='\0';i++)
        switch(sen[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O': 
            case 'u':
            case 'U': vo[j++]=sen[i]; break;
            default: con[k++]=sen[i];
        }
    vo[j]=con[k]='\0';
    printf("vovels are: %s\nconsonants are: %s",vo,con);
}