#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
int main()
{
    int t,k;
    char word[52];
    printf("t");
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
            int p=1;
    printf("word?");
    scanf("%s",word);
    printf("k?");
    scanf("%d",&k);
    int l=strlen(word);
    for(int i=0;i<k;i++)
    {
            p*=(l-i);
            }
            printf("%d",p);
            
}
    getch();
               
}
