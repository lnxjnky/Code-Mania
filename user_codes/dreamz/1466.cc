#include<stdio.h>


int main()
{
  int n, k=0, denom, pric, coin[100], max =0, i, j, t, f=0, rem,l, sol[100];
  scanf("%d", &n);
  while(n)
  {
    scanf("%d%d", &denom, &pric);
    for (i=0; i<denom; i++)
        scanf("%d", &coin[i]);
       
    for (i=0; i<denom; i++ ) 
     {
       for (j=i+1; j<denom; j++)
       {
       if (coin[i] > coin[j])
        {
          t = coin [i];
          coin [i] = coin [j];
          coin [j] = t;  
        }
       }
     }
	rem = pric;
    for (i=0,l=1;i<denom;i++,l++)
    {

	if(rem >= coin[denom-l])
	{
             f = f+ rem / coin [denom -l];
       	     rem = rem % coin[denom-l];
		if(rem ==0)
		break;
 	}
        
    }
    sol[k]=f;  
  n--;
  k++;
 }
 for (i=0;i<k;i++)
  printf ("%d\n", sol[i]);
 return;
 }