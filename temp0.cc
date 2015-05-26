#include<stdio.h>
int  main()
{
      int i;
      char hole='.';
      char  inp[100];
      gets(inp);
      for(i=0;i!='\0';i++)
      {
                          
       if(inp[i]==hole)
        printf("Yes");
       else
       printf("no");
       }
     
       return(0);
}