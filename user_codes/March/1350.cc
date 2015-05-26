#include<stdio.h>
int main()
{
  int t,l[100],k,j,i=0,per=0;
  scanf("%d",&t);
  for(k=0;k<t;k++)
    {scanf("%d",&l[k]);
     }
 for(k=0;k<t;k++)    
    {per=0;  
    for(j=1;j<=l[k];j++)
      {int s=0;
       for (i=1;i<=j;i++)
        {
         if(j%i==0)
         {s=s+i;}
        }
        if( s==2*j)
        {per=per+j;}
        }
        printf("%d \n",per);
    }
  getch();
  return 1;
}                