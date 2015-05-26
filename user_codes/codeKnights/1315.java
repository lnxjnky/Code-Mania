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
		B solver = new B();
		solver.solve(1, in, out);
		out.close();
	}
}

class B {
	public void solve(int testNumber, Scanner in, PrintWriter out) {
        long n,k,mod=1000000007;
        long i;
        int t=in.nextInt(),test;
        long p;
        for(test=0;test<t;test++)
        {
            n=in.next().length();
            k=in.nextLong();
            p=1;
            for(i=n;i>=(n-k+1);i--)
            {
                p=(p*i)%mod;
            }
            out.println(p);
        }
	}
}

