import java.util.*;
 
class Main {
	private static Scanner in=new Scanner(System.in);
	
	public static void main (String[] args) throws java.lang.Exception
	{
		
		int t=in.nextInt();
		while(t>0)
		{
		    t--;
		    int n=in.nextInt();
		    HashSet<Integer> hs=new HashSet<>();
		    for(int i=0;i<n;i++)
		    {
		        hs.add(in.nextInt());
		    }
		    System.out.println(hs.size());
		}
	}
}
  