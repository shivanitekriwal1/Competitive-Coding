
import java.util.Scanner;

public class kangaroo {
    public static void main(String args[]) throws java.lang.Exception
    {
        Scanner sc= new Scanner(System.in);
         int x1 = sc.nextInt();
        int v1 = sc.nextInt();
        int x2 = sc.nextInt();
        int v2 = sc.nextInt();
        for(int i=0; i<10000; i++)
        {
            x1=v1+x1;
            x2=v2+x2;
            if(x1==x2)
            {
                System.out.print("YES");
                System.exit(0);
            }
            
        }
        System.out.print("NO");
    }
            
}
