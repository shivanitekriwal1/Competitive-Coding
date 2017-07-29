import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i,p=0,q=0;
        int a0 = in.nextInt();
        int a1 = in.nextInt();
        int a2 = in.nextInt();
        int b0 = in.nextInt();
        int b1 = in.nextInt();
        int b2 = in.nextInt();
        if(a0>b0)
            {p++;}
        if(b0>a0)
            {q++;}
        if(a0==b0)
        {System.out.print("");}
         if(a1>b1)
            {p++;}
        if(b1>a1)
            {q++;}
        if(a1==b1)
        {System.out.print("");}
         if(a2>b2)
            {p++;}
        if(b2>a2)
            {q++;}
        if(a2==b2)
        {System.out.print("");}
        System.out.print(p+" "+q);
        
    
}
}