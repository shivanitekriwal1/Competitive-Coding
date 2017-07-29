import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int p=0,q=0,r=0; 
        int n = in.nextInt();
        int arr[] = new int[n];
        for(int i=0; i < n; i++)
        {
            arr[i] = in.nextInt();
            
        }
        for(int i=0; i<n;i++)
            {
            if (arr[i]>0)
            p++;
            
        else
            if (arr[i]<0)
            q++;
        else
            if (arr[i] ==0)
            r++;
        }
        
    float a= (float)p/n;
    float b= (float)q/n;
    float c= (float)r/n;
    System.out.println(a);
    System.out.println(b);
    System.out.println(c);
    }
    
}
