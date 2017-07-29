import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int p=0;
        int n = in.nextInt();
        int k = in.nextInt();
        int a[] = new int[n];
        for(int i=0; i < n; i++){
            a[i] = in.nextInt();
        }
        int g;
        for(int j=0;j<n;j++){
        for(int i=j+1;i<n;i++){
            g=a[j]+a[i];
            if(g%k==0)
                p++;
        }
        }
        
        System.out.print(p);
    }
}
