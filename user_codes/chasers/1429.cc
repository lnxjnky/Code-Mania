#include<stdio.h>
int fact(int n);
int main()
{
  int t,k[100],i=0,j=0;
  char A[100][52];   
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
   scanf("%s %d",A[i],&k[i]);
  }
  while(j<t)
  { 
    int res=0;
    int l=0,f1,f2;
    l=strlen(A[j]);
    f1=fact(l);
    f2=fact(l-k[j]);
    res=f1/f2;
    printf("%d\n",res);
    j++;
  }
    
  return 0;
  
}
int fact(int n)
{ 
    int i,f=1;
    for(i=n;i>=1;i--)
    f=f*i;
    return(f);
}
