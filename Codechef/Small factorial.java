import java.io.BufferedReader;
import java.io.InputStreamReader;
class factorial
{
    public static void main(String args[]) throws java.lang.Exception
    {
        BufferedReader br= new BufferedReader( new InputStreamReader(System.in));
        int k=1;
        int n= Integer.parseInt(br.readLine());
        for(int i=0; i<n; i++)
        {
        int N= Integer.parseInt(br.readLine());
        System.out.println(fact(N));
        }
        }
        
        static int fact(int N)
        {
        int k=1;
        for(int j=2; j<=N; j++)
        {
        k=k*j;
        }
        return k;
        }
        } 