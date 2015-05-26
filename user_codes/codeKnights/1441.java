import java.util.Scanner;
import java.io.OutputStream;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Stack;
import java.io.InputStream;
import java.util.Vector;

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
            s=in.nextInt();
            k=in.nextInt();
            int a[][]=new int[n][n];
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    a[i][j]=in.nextInt();
            int steps[]=new int[n];
            steps[0]=0;
            Stack<Integer> pos=new Stack<Integer>();
            pos.push(0);
            for(hops=1;hops<=k;hops++)
            {
               for(i=0;i<pos.size();i++)
               {
                   int x=pos.pop();
                   for(j=0;j<n;j++)
                   {
                       if(a[x][j]==1)
                       {
                           pos.push(j);
                       }
                   }
               }
            }
            boolean status=false;
            for(i=0;i<pos.size();i++)
            {
                if(pos.pop()==s)
                    status=true;
            }
            if(status)
                out.println("Yes");
            else out.println("No");
        }
	}
}

