import java.io.*;
class p1
{    
	  String s1;int j,temp;int arr1[]=new int[1000];int temp1,index;boolean flag;
	  void getdata()
	  {
	  Console c=System.console();
	 // System.out.println("enter the number of test cases");
	   String s =c.readLine();
	   int i=Integer.parseInt(s);
	   int arr[]=new int[i];
	   for(j=0;j<i;j++)
	    {
		 // System.out.println("enter the value of N");
		  s1=c.readLine();
		  arr[j]=Integer.parseInt(s1);
		}
		for(j=0;j<i;j++)
	    {
		  temp=arr[j]; 
		  temp1=2;
		  index=0;
		  flag=true;
		  getprime(temp);
		  print();
		}
	  }
		
		
	
	void getprime(int num)
	 {
	   if(temp1<=num)
	   {
	      if(num%temp1==0)
		   {
		    num/=temp1;
			arr1[index++]=temp1;
		   }
		     else
			  temp1++;
			  getprime(num);
			  
			
				   
	    }
		else
		 return;
	} 
	 void print()
	  
	  
	  {
	   for(int rr=0;rr<index;rr++)
	     { 
		  
		    
			if(((arr1[rr])%4==1))
			  { 
			    flag=false;
				continue;
			  }
			  if(((arr1[rr])%4==3))
			  { 
			    flag=true;
				break;
			  }
			  
			  
		   
		   
		 }
		 if(!flag)
		   System.out.println("Yes");
		 else
		   System.out.println("No");
		} 
	 
}

class p2
{
  public static void main(String args[])
   {
      
    p1 p=new p1();
	p.getdata();
   
   }
}