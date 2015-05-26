import java.util.Scanner;
import java.io.OutputStream;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.InputStream;

/**
 * Built using CHelper plug-in
 * Actual solution is at the top
 * @author codeKNIGHT
 */
public class codeKnights {
	public static void main(String[] args) {
		InputStream inputStream = System.in;
		OutputStream outputStream = System.out;
		Scanner in = new Scanner(inputStream);
		PrintWriter out = new PrintWriter(outputStream);
		D solver = new D();
		solver.solve(1, in, out);
		out.close();
	}
}

class D {
	public void solve(int testNumber, Scanner in, PrintWriter out) {
        int t=in.nextInt(),test;
        for(test=0;test<t;test++)
        {
        int n=in.nextInt(),s=in.nextInt(),i;
        int a[]=new int[n];
        for(i=0;i<n;i++)
            a[i]=in.nextInt();
        out.println(minCoins(a,s));
        }
	}
    public static long minCoins(int a[],int s)
    {
        int i,j;
        int n=a.length;
        long min[]=new long[s+1];
        min[0]=0;
        for(i=1;i<=s;i++)
        min[i]=Integer.MAX_VALUE;
        //int last[]=new int[s+1];
        //last[0]=0;
        for(i=1;i<=s;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[j]<=i)
                {
                    if((min[i-a[j]]+1<min[i]))
                    {
                        min[i]=min[i-a[j]]+1;
                        //last[i]=a[j];
                    }

                }
                //else min[i]=0;
            }
        }
        if(min[s]==Integer.MAX_VALUE)
            return 0;
        else 
        return min[s];
    }
}

