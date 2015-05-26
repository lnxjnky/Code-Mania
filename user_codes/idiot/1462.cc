#include<stdio.h>
#include<string.h>
int main()
{
    int t,k,n, i, j;
    char word[52];

    scanf("%d", &t);

  int a[t];
    for(i=0;i<t;i++)
       {
           int pro=1;
           scanf("%s", word);
           n=strlen(word);

           scanf("%d", &k);
         for(j=1;j<=k;j++)
          {
               pro=pro*n;
                n=n-1;
                }
         a[i]=pro;
          }
          for(i=0;i<t;i++)
          printf("%d\n",a[i]);
          return 0;

      }
