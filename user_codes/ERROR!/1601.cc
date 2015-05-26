#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int issum(float);

int main()
{
	 float n, z,k,ip[100];
	 int i,j;
	 int op[100];

	 scanf("%f",&n);
	 if(n<1||n>100)
	 exit(0);

	 i=0;
	 while(i<n)
	 {
		  scanf("%f",&ip[i]);
		  if(ip[i]<1||ip[i]>1e15)
		  {

				n--;
		  continue;


		  }

		 op[i]=issum(ip[i]);
		 i++;
	}


	 for(i=0;i<n;i++)
	 {
		  if(op[i]==1)
	 printf("Yes\n");
	 else
	 printf("No\n");
}

	 
	 return 0;
}


int issum(float n)
{
	 float z,k,x,y;
	 int j;

	z = sqrt(n);
	 for(float i=1;i<=z;i++)
	 {

	  x = n- pow(i,2);
	  y= sqrt(x);
	 if (fmod(y, 1) == 0)
	 {
					 return 1;
	 }

	  }

		  return 0;

 }