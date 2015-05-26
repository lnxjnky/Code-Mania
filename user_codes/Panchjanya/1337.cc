#include<stdio.h>

int main()
{
    int magic[]={6,28,496,8128},n,t;
    scanf("%d",&t);
    while(t){
    
    scanf("%d",&n);
    if(n>=8128)printf("%d\n",8658);
    else if(n>=496) printf("%d\n",530);
    else if(n>=28) printf("%d\n",34);
    else if(n>=6) printf("%d\n",6);
    else printf("%d\n",0);
    t--;
    }    
    //getch();
    return 0;
}    