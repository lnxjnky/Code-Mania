import java.util.Scanner;

class Main
{
	public static void main(String args[])
	{
	Scanner input = new Scanner(System.in);
	int x = input.nextInt();
	outer :
	if(x<=100&&x>=1)
	{
	
	int array[] = new int[x];

	for(int i =0;i<x;i++)
	{
	int a=  input.nextInt();
	if(a>=1&&a<=10000) array[i]=a;
	else break outer;
	}
	
	for(int i =0;i<x;i++)
	{
	int sum =0;
	for(int j =1;j<=array[i];j++)
	 sum+=(new Sum().SumFactors(j));
	System.out.println(sum);
	}


	}
}
}
class Sum
{	
	
	int SumFactors(int i)
	{
	if(i==1)return 0;
	if(i==2)return 0;
	//if i >2
	int sum = 0; 	
		for(int j=1;j<=i;j++)
		{
		int remainder = i%j ;
		if(remainder==0) sum+=j;
		}
	
	if((i*2)==(sum))return i;
	return 0;
	}



}