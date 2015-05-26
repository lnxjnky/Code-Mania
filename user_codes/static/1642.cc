#include<stdio.h>
 #include<string.h>
int main() 
 {
   int t,n,m,k,i,j,x,a[200],temp,index;
   char str[52]; 
    scanf("%d",&t);
     for(i=0;i<t;i++)
        {scanf("%s",str);
          scanf("%d",&k);
	n=strlen(str);
           a[0]=n;
            m=1;
	    temp=0;   for(j=(n-k+1);j<n;j++)
		{
			for(index=0;index<m;index++)
			     {
				x=a[index]*j+temp;
				a[index]=x%10;
				temp=x/10;
				
				
			     }
 		        while(temp!=0)
			     {   m++;
				a[index]=temp%10;
				 temp=temp/10;
                                  index++;
			     }

		}  
           	for(j=m-1;j>=0;j--)
                     printf("%d",a[j]);
	printf("\n");
	}
      
     return 0;
 }
 