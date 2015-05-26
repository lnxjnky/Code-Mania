#include<stdio.h>
 #include<string.h>
int main() 
 {
   int t,n,m,k,i,j,x,a[200],temp,index,count;
   char str[52]; 
    scanf("%d",&t);
     for(i=0;i<t;i++)
        {count=0;
scanf("%s",str);
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
                      for(j=0;j<=m-1;j++)
                           {    if((a[j]==0))
		count++;
	    else
    	break;}
                           printf("10^%d+",count);	
           	for(j=m-1;j>=count+1;j--)
                     printf("%d",a[j]);
	printf("\n");
	}
      
     return 0;
 }
 