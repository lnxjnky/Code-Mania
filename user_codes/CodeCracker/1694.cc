#include<stdio.h>
int main()
{
 char wrd[30];
 int count=0,s=0,i=0;
 scanf("%s",&wrd);
 while(wrd[i]!=NULL)
 {
  s=s+1;
  i++;
 }
 for(i=0; i<s; i++)
 {
  if(wrd[i]==97||wrd[i]==101||wrd[i]==105||wrd[i]==111||wrd[i]==117)
  {
   count =count+1;
  }
 }
 printf("%d",count);
 return(0);
}