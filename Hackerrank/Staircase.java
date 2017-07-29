import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        long b = in.nextLong();
        long c = in.nextLong();
        long d = in.nextLong();
        long e = in.nextLong();
        long max=0; long min=0;
        long s = a+b+c+d+e;
        long a1= s-a;
        long b1= s-b; 
            if (b1>a1){
                max = b1 ; min = a1;}
                else if (b1<a1){
                min = b1 ; max= a1;
            }
        long c1 = s-c; 
            if (c1>max){
                max = c1;
                }
                else if (c1<min){
                         min = c1;
                         }    
                 long d1 = s-d; 
            if (d1>max){
                max = d1;
                }
                else if (d1<min){
                         min = d1;
                         }     
                           long e1 = s-e; 
            if (e1>max){
                max = e1;
                }
                else if (e1<min){
                         min = e1;
                         }       
        if (a==b&&b==c&&c==d&&d==e)
            {max= a+b+c+d;
            min = a+b+c+d;
            }
                         System.out.print(min +" "+ max);
                }
}
