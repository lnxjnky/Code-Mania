import java.util.Scanner;
import java.io.OutputStream;
import java.io.IOException;
import java.util.Arrays;
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
		A solver = new A();
		solver.solve(1, in, out);
		out.close();
	}
}

class A {
	public void solve(int testNumber, Scanner in, PrintWriter out) {
        int t=in.nextInt(),test,i,j,s,n,k,hops=0;
        for(test=0;test<t;test++)
        {
            n=in.nextInt();
            s=in.nextInt()-1;
            k=in.nextInt();
            int a[][]=new int[n][n];
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    a[i][j]=in.nextInt();

            boolean init[]=new boolean[n];
            Arrays.fill(init,false);
            init[0]=true;
            boolean fin[]=new boolean[n];
            Arrays.fill(fin,false);
            for(hops=1;hops<=k;hops++)
            {
               for(i=0;i<n;i++)
               {
                   if(init[i])
                   for(j=0;j<n;j++)
                   {
                       if(a[i][j]==1)
                       {
                           fin[j]=true;
                       }
                   }

               }
               for(i=0;i<n;i++)
                   init[i]=fin[i];
                Arrays.fill(fin,false);
            }
            boolean status=false;
             
            if(init[s])
                out.println("Yes");
            else out.println("No");
        }
	}
}

