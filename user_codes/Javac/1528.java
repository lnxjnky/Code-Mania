import java.util.Scanner;
import java.lang.Math;
class Javac
{
	public static void main(String args[])
	{
	Scanner input = new Scanner(System.in);
	int x = input.nextInt();
	outer :
	if(x<=100&&x>=1)
	{
	
	double array[] = new double[x];

	for(int i =0;i<x;i++)
	{
	double a=  input.nextDouble();
	if(a>=1&&a<=Math.pow(10,15)) array[i]=a;
	else break outer;
	}
	
	for(int i =0;i<x;i++)
	{
	System.out.println(new Special().SpecialSum(array[i]));
	}


	



	}
	}
}

class  Special
{
	

	public String SpecialSum(double i)
	{
	double count = i/2 ;
	for(int x= 0; x<=count;x++)
		for(int y = 0 ;y<=x;y++)
		{
		if((Math.pow(x,2)+Math.pow(y,2))==i){ return "Yes";}

		}
	return "No";

	}


}
