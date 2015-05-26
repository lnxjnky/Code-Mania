#include<stdio.h>
void main()
{
      int i;
      char hole='.';
      char  inp[100];
      gets(inp);
      for(i=0;i!='\0';i++)
      {
                          
       if(inp[i]==hole)
        printf("here no hole is found so Aladdin crosses the path");
       else
       printf("here Aladdin cannot cross the path.");
       }
}
