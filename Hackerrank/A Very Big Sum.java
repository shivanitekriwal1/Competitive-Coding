import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int sum = 0, sum1= 0,diff,diff1;
        int n = in.nextInt();
        int a[][] = new int[n][n];
        for(int i=0; i < n; i++)
        {
            for(int j=0; j < n; j++)
            {
                a[i][j] = in.nextInt();
                 }
        }
        for( int i=0; i<n; i++)
        {
        sum= sum + a[i][i];
        }
        int j = (n-1);
        for (int i=0;i<n; i++)
        {
        if(j>=0)
        {
        sum1 = sum1 + a[i][j];
        j--;
        }
    }
        diff = sum - sum1;
        diff1 = Math.abs(diff);
    System.out.print(diff1);
}
}
        