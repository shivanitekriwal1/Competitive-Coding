import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int a= in.nextInt();
        int b= in.nextInt();
        int a1[]= new int[b];
        for(int i=0;i<b; i++){
            a1[i]= in.nextInt();
        }
            for(int i=0;i<b;i++){
                if(a1[i]==a)
                    System.out.print(i);
                continue;
            }
    }
}