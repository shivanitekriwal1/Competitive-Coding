import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
            int n= sc.nextInt();
        int p=0;
        int a[]= new int[n+n];
        for(int i=0;i<n;i++){
            a[i]= sc.nextInt();
        }
        for(int i=0;i<n-1;i++){
            for(int j=i;j>=0;j--){
            if(a[j]>a[j+1])
                {
                p++;
                int c= a[j+1];
                a[j+1]= a[j];
                a[j] = c;
               
            }
              
            }
        }
           System.out.print(p);
    }
}