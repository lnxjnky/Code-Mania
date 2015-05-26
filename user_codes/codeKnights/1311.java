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
		E solver = new E();
		solver.solve(1, in, out);
		out.close();
	}
}

class E {
	public void solve(int testNumber, Scanner in, PrintWriter out) {
        boolean per[]=perfect(12000);
        int i;
        int t=in.nextInt(),test;
        long sum[]=new long[per.length];
        

        for(i=1;i<per.length;i++)

        {
            if(per[i])
                sum[i]+=i;
            sum[i]+=sum[i-1];
        }
        for(test=0;test<t;test++)
        {
            int n=in.nextInt();
            out.println(sum[n]);
        }
	}
    public boolean [] perfect(int n)
    {
        boolean per[]=new boolean[n+1];
        int i,j;
        for(i=1;i<=n;i++)
        {
            int sqrt=(int)Math.sqrt(i);
            long sum=0;
           for(j=1;j<=sqrt;j++)
           {
                if(i%j==0)
                   sum+=j+i/j;
                double k=Math.sqrt(i);
               if(k-sqrt==0)
                   sum-=j;
           }
            if(sum==2*i)
                per[i]=true;

        }
        

        return per;
    }
}

