import java.util.Scanner;
public class Main
{
public static void main(String[] args)
{
Scanner scn = new Scanner(System.in);
int a = scn.nextInt();
int b = scn.nextInt();
int c = a-b;
int rem = c%10;
if(rem==9)
System.out.println(c-1);
else
System.out.println(c+1);
}
}  