#include<iostream.h>

void main()
{
         
         int i,j,k,m,t,l[100],p[100],s[100];
         cin>>t;
         if(t<1 || t>100)
         cout<<" \nEnter test cases between 1 and 10000";
         for(i=0;i<t;i++)
         {
           cin>>l[i];
           if(l[i]<1 || l[i]>10000)
           cout<<"\nInvalid Entry";
         }
           s[0]=0,p[0]=0;
           for(i=0,;i<t;i++)
           {
             for(k=1,;k<=l[i];k++)
              {
                for(j=1;j<=k;j++)
                {
                  if(k%j==0)
                  s[k-1]+=j;
                 }
                 s[k]=0;
                  if(s[k-1]==2*k)
                  p[k-1]+=k;
                      
              }
           }
         
           for(i=0;i<t;i++)
           cout<<p[i]<<"\n";

           

}
                
           








