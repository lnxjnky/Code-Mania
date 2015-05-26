#include<stdio.h>
 main()
{
     int c,i;
     char inp[10];
     gets(inp);
     for ( i=0;i!='\0';i++)
     {
          if(inp[i]=='a' )
          c++;
          else if(inp[i]=='e')
          c++;
          else if(inp[i]=='i')
          c++;
          else if(inp[i]=='o')
          c++;
          else if(inp[i]=='u')
          c++;
          
          
          }
     printf("%d",c);
  
     return(0);
}