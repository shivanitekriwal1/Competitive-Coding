import java.util.Scanner;
import java.io.IOException;

public class applesnoranges {
    public static void main(String args[]) throws IOException
    {
        Scanner sc= new Scanner(System.in);
        int s = sc.nextInt();
        int t = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int m = sc.nextInt();
        int n = sc.nextInt();
        int ap[]= new int[m];
        int or[]= new int[n];
        int p=0,q=0;
        for(int i=0; i<m; i++)
        {
            ap[i]= sc.nextInt();
        }
         for(int j=0; j<n; j++)
        {
            or[j]= sc.nextInt();
        }
        for (int e=0; e<m; e++)
        {
            if(ap[e]>0)
            {
                int y= ap[e]+a;
                if((y>s&&y<t)||y==s||y==t)
                { p++;
                }
                }      
            }
        System.out.println(p);
                
        
       
        for(int f=0; f<n; f++)
        {
            if(or[f]<0)
            {
                int z= or[f]+b;
                if((z>s&&z<t)||z==s||z==t)
                {
                    q++;
                            }
            }   }
        System.out.println(q);
        }
                }
        
   

