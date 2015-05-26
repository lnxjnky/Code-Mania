#include<stdio.h>
 int a[21][21];
 int n,k,s;
 int f(int,int);
int main()
{

     int hop,j,t,i;
    scanf("%d",&t);
    while(t)
    {

        scanf("%d",&n);
        scanf("%d",&s);
        scanf("%d",&k);

        for(i=1;i<=n;i++)
        {

            for(j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]);
            }

        }
        j=1;hop=0;
        int h=f(hop,j);
        if(h==1)
        printf("Yes\n");
else
 printf("No\n");
        t--;
    }
    return 0;
}
int f(int hop,int j)
{
    int i,jjk;
    for(i=1;i<=n;i++)
    {
        if(a[j][i]==1)
        {
            hop++;
            if(hop==k&&i==s)
            {
                return 1;
            }
            else if(hop>k)
            {
                return 0;
            }
            else if(hop<k)
            {
                jjk=f(hop,i);
                if(jjk==1)
                return 1;
            }
            else
            return 0;
        }
    }
    return 0;
}
