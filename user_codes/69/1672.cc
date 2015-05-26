#include<stdio.h>
#include<math.h>
int main()
{int t,c,a;
 int ar[100];
 printf("please enter the no. of tests");
 scanf("%d",&t);
 printf("please enter the nos.");
 for(int i=0;i<t;i++)
  scanf("%d",&ar[i]);
 for(int m=0;m<t;m++)
 {c=0;a=sqrt(ar[m]);
  for(int j=0;j<=a;j++)
 {for(int k=ar[m];k>sqrt(ar[m]);k--)
  {if(((j+k)>=sqrt(ar[m]))
 {if(j*j+k*k)=ar[m]
  c=1;}
 }
   if(c==1)
   break;
   }
 if(c==0)
printf("NO\n");
else
printf("YES\n");
}return 0;
}