#include <stdio.h>
main()
{
    int t,k,i,j,u;
    long int m,y;
    char s[60],ch;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        m=1;
        j=0;
        while(1)
        {
            scanf("%c",&ch);
            if(ch==' ')
            {
                s[j]='\0';
                break;
            }
            else
            {
                s[j++]=ch;
            }
        }
        scanf("%d",&k);
        j--;
        for(u=0;u<k;u++)
        {
            m=m*j;
            j--;
        }
        y=m%1000000007;
        printf("%ld\n",y);
    }
}
                       