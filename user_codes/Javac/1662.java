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
	double count =Math.sqrt(i) ;
	double y =Math.floor(count);
	double x;
	for( x= Math.floor(count); x>=1 ;x--)
	for( y=0;  y<=Math.floor(count) ;y++)
	{
	
	if(((Math.pow(x,2)+Math.pow(y,2))==i)&&x!=y){ return "Yes";}}

		
	return "No";

	}


}
