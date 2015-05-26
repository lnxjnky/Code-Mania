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
		C solver = new C();
		solver.solve(1, in, out);
		out.close();
	}
}

class C {
	public void solve(int testNumber, Scanner in, PrintWriter out) {
        long n;
        int t=in.nextInt(),test;
        //long sq[]=new long[(int)Math.sqrt(Math.pow(10,15))];
        long i;

        long a,b;
        for(test=0;test<t;test++)
        {
            n=in.nextLong();
            int sqrt=(int)Math.sqrt(n);
            boolean status=false;
            for(i=0;i<=sqrt;i++)
            {
                 a=i*i;
                 b=n-a;
                  double k=Math.sqrt(b);
               if(k-sqrt==0)
               {
                   status=true;
                   break;
               }
            }
            if(status)
                out.println("Yes");
            else out.println("No");
        }
	}
}

