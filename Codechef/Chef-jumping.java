import java.util.Scanner;
class solution
{
    public static void main(String args[]) throws java.lang.Exception
    {
        Scanner sc= new Scanner(System.in);        
        Long n=sc.nextLong();
        if((n%6)==0||(n%6)==1||(n%6)==3)
        {
        System.out.println("yes");
        }
        else
        {
        System.out.println("no");
        }}}