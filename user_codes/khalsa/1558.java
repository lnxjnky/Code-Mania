import java.io.*;
import java.util.*;
class code
{


public static void main(String ar[])throws IOException
{
BufferedReader ob=new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(ob.readLine());
int keyp[]=new int[t];
int ch=0;
while(ch<t){
String cm=ob.readLine();
StringTokenizer tokenizer = new StringTokenizer(cm);
int o=1;


    int n = Integer.parseInt(tokenizer.nextToken());
int s= Integer.parseInt(tokenizer.nextToken());
int k= Integer.parseInt(tokenizer.nextToken());


int a[][]=new int[n+1][n+1];
int f=1;
while(f<=n){
cm = ob.readLine();

   tokenizer = new StringTokenizer(cm);
    int g=1,h=1;
    while(tokenizer.hasMoreTokens()) {

    int m = Integer.parseInt(tokenizer.nextToken());
     if(m==1) 
         {a[f][h]=g;h++;}
g++;
}++f;
}

int key[]=new int[1];
fun(a,k,s,0,1,1,0,key);
keyp[ch]=key[0];

++ch;
}
for(int i=0;i<t;i++)
if(keyp[i]==1)
System.out.println("yes");
else
System.out.println("no");

}

public static void fun(int a[][],int finalkey,int finl,int k,int i,int m,int flg,int key [])
{
if(flg==0)
++k;
i=a[i][m];
if(k==finalkey&&i==finl)
key[0]=1;
else if(k<finalkey&&a[i][m]>0)
{
fun(a,finalkey,finl,k,i,m,0,key);
if(key[0]==0&&a[i][m+1]>0)
fun(a,finalkey,finl,k,i,m+1,1,key);
}

}
}