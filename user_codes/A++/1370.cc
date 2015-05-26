#include<stdio.h>
#define done1 1
#define notdone 0
int main()

{

    int arr[51];
    int a,b,c;int inp,inp1,temp;
    int ans=0;
    for(a=0;a<=50;a++)
    arr[a]=a*a;
    scanf("%d",&inp);
    for(a=1;a<=inp;a++)
    {   ans=notdone;
        scanf("%d",&inp1);
        for(b=0;b<=50;b++)
        {
            temp=inp1;
            for(c=b+1;c<=50;c++)
            {
                if((temp-arr[b])==arr[c])
                ans=done1;
            }
        }
        if(ans==done1)
           {
             printf("Yes\n");
           }
        else
            printf("No\n");
    }
}
